#ifndef UNITTESTS_SETUPWATERBOX2_H
#define UNITTESTS_SETUPWATERBOX2_H

#define SETUP_WATERBOX_2                                                                                      \
    const int n_monomers = 2;                                                                                 \
    const int n_atoms = 8;                                                                                    \
    std::vector<double> chg_grad(27 * n_monomers, 0.0);                                                       \
    std::vector<double> polfac(n_atoms, 1e-7);                                                                \
    std::vector<double> pol(n_atoms, 1e-7);                                                                   \
    std::vector<std::string> monomer_names(n_monomers, "h2o");                                                \
    std::vector<double> charges(n_atoms, 0);                                                                  \
    for (int n = 0; n < n_monomers; ++n) {                                                                    \
        charges[4 * n + 0] = qO;                                                                              \
        charges[4 * n + 1] = qH;                                                                              \
        charges[4 * n + 2] = qH;                                                                              \
        charges[4 * n + 3] = qM;                                                                              \
    }                                                                                                         \
    std::vector<size_t> first_ind(n_monomers, 0);                                                             \
    for (int n = 1; n < n_monomers; ++n) {                                                                    \
        first_ind[n] = 4 * n;                                                                                 \
    }                                                                                                         \
    std::vector<size_t> sites(n_monomers, 4);                                                                 \
    std::vector<std::pair<std::string, size_t>> mon_type_count{{"h2o", n_monomers}};                          \
    std::vector<double> coords{-11.5109336618, 1.0563960610,   6.6033301068,  -11.7795660388, 0.8781403410,   \
                               5.7020569050,   -12.2938264730, 0.8826090481,  7.1259281936,   -11.6417034996, \
                               1.0063049360,   6.5256614324,   11.5501833807, -1.5847863244,  -1.5602148182,  \
                               11.1133062356,  -0.8169061174,  -1.9286305994, 11.2385781621,  -2.3166732236,  \
                               -2.0926390799,  11.4605158991,  -1.5472825089, -1.6602317315};
#endif