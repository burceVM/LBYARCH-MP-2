# LBYARCH-MP-2

LBYARCH Machine Problem #2
S14
Burce, Vincent Maximus
Del Rosario, Nixin Gabriel

## DEBUG:
### n = 2<sup>20</sup>
Value of n: 1048576\
Generated values for X:\
3.1 9.6 5.3 8.1 6.8 4.8 6.0 6.3 8.5 6.9\
Generated values for Y:\
5.5 0.8 0.1 8.9 2.4 6.0 7.2 7.9 2.1 4.5

![Correctness Check 1 for Debug](correctness_check_1(debug).png "Correctness Check 1 for Debug")

#### x86-64 Kernel
| Loop# | Measured Time (seconds) |
|-------|--------------------------|
| 1     | 0.002                    |
| 2     | 0.001                    |
| 3     | 0.001                    |
| 4     | 0.001                    |
| 5     | 0.002                    |
| 6     | 0.002                    |
| 7     | 0.001                    |
| 8     | 0.002                    |
| 9     | 0.001                    |
| 10    | 0.002                    |
| 11    | 0.001                    |
| 12    | 0.001                    |
| 13    | 0.001                    |
| 14    | 0.001                    |
| 15    | 0.001                    |
| 16    | 0.001                    |
| 17    | 0.004                    |
| 18    | 0.002                    |
| 19    | 0.002                    |
| 20    | 0.001                    |
| 21    | 0.001                    |
| 22    | 0.001                    |
| 23    | 0.001                    |
| 24    | 0.002                    |
| 25    | 0.001                    |
| 26    | 0.002                    |
| 27    | 0.002                    |
| 28    | 0.002                    |
| 29    | 0.001                    |
| 30    | 0.002                    |

#### C Kernel
| Loop# | Measured Time (seconds) |
|-------|--------------------------|
| 1     | 0.003                    |
| 2     | 0.004                    |
| 3     | 0.003                    |
| 4     | 0.003                    |
| 5     | 0.002                    |
| 6     | 0.004                    |
| 7     | 0.003                    |
| 8     | 0.003                    |
| 9     | 0.003                    |
| 10    | 0.003                    |
| 11    | 0.003                    |
| 12    | 0.003                    |
| 13    | 0.004                    |
| 14    | 0.003                    |
| 15    | 0.003                    |
| 16    | 0.003                    |
| 17    | 0.004                    |
| 18    | 0.004                    |
| 19    | 0.003                    |
| 20    | 0.003                    |
| 21    | 0.003                    |
| 22    | 0.002                    |
| 23    | 0.005                    |
| 24    | 0.004                    |
| 25    | 0.004                    |
| 26    | 0.004                    |
| 27    | 0.004                    |
| 28    | 0.003                    |
| 29    | 0.004                    |
| 30    | 0.004                    |

#### Average Time
Average Time for x86-64 Kernel: 0.001\
Average Time for C Kernel: 0.003

### n = 2<sup>24</sup>
Value of n: 16777216\
Generated values for X:\
3.1 9.6 5.3 8.1 6.8 4.8 6.0 6.3 8.5 6.9\
Generated values for Y:\
1.1 5.6 7.3 8.9 4.4 2.0 7.6 5.1 5.7 2.1

![Correctness Check 2 for Debug](correctness_check_2(debug).png "Correctness Check 2 for Debug")

#### x86-64 Kernel
| Loop# | Measured Time (seconds) |
|-------|--------------------------|
| 1     | 0.020                    |
| 2     | 0.015                    |
| 3     | 0.015                    |
| 4     | 0.014                    |
| 5     | 0.019                    |
| 6     | 0.017                    |
| 7     | 0.014                    |
| 8     | 0.015                    |
| 9     | 0.016                    |
| 10    | 0.018                    |
| 11    | 0.015                    |
| 12    | 0.015                    |
| 13    | 0.015                    |
| 14    | 0.015                    |
| 15    | 0.016                    |
| 16    | 0.016                    |
| 17    | 0.017                    |
| 18    | 0.016                    |
| 19    | 0.016                    |
| 20    | 0.014                    |
| 21    | 0.017                    |
| 22    | 0.014                    |
| 23    | 0.015                    |
| 24    | 0.015                    |
| 25    | 0.022                    |
| 26    | 0.014                    |
| 27    | 0.014                    |
| 28    | 0.025                    |
| 29    | 0.020                    |
| 30    | 0.014                    |

#### C Kernel
| Loop# | Measured Time (seconds) |
|-------|--------------------------|
| 1     | 0.036                    |
| 2     | 0.036                    |
| 3     | 0.035                    |
| 4     | 0.043                    |
| 5     | 0.038                    |
| 6     | 0.044                    |
| 7     | 0.034                    |
| 8     | 0.038                    |
| 9     | 0.035                    |
| 10    | 0.035                    |
| 11    | 0.034                    |
| 12    | 0.037                    |
| 13    | 0.037                    |
| 14    | 0.036                    |
| 15    | 0.039                    |
| 16    | 0.042                    |
| 17    | 0.037                    |
| 18    | 0.036                    |
| 19    | 0.035                    |
| 20    | 0.039                    |
| 21    | 0.036                    |
| 22    | 0.034                    |
| 23    | 0.033                    |
| 24    | 0.034                    |
| 25    | 0.035                    |
| 26    | 0.033                    |
| 27    | 0.035                    |
| 28    | 0.042                    |
| 29    | 0.036                    |
| 30    | 0.035                    |

#### Average Time
Average Time for x86-64 Kernel: 0.016\
Average Time for C Kernel: 0.037

### n = 2<sup>28</sup>
Value of n: 268435456\
Generated values for X:\
4.4 2.2 7.4 3.1 5.8 8.7 1.0 2.2 9.5 4.4\
Generated values for Y:\
2.4 1.8 5.4 2.7 7.0 8.3 2.2 5.0 0.7 4.0

![Correctness Check 3 for Debug](correctness_check_3(debug).png "Correctness Check 3 for Debug")

#### x86-64 Kernel
| Loop# | Measured Time (seconds) |
|-------|--------------------------|
| 1     | 0.245                    |
| 2     | 0.253                    |
| 3     | 0.239                    |
| 4     | 0.243                    |
| 5     | 0.248                    |
| 6     | 0.276                    |
| 7     | 0.256                    |
| 8     | 0.243                    |
| 9     | 0.249                    |
| 10    | 0.252                    |
| 11    | 0.240                    |
| 12    | 0.244                    |
| 13    | 0.246                    |
| 14    | 0.248                    |
| 15    | 0.245                    |
| 16    | 0.248                    |
| 17    | 0.257                    |
| 18    | 0.253                    |
| 19    | 0.244                    |
| 20    | 0.245                    |
| 21    | 0.244                    |
| 22    | 0.241                    |
| 23    | 0.246                    |
| 24    | 0.246                    |
| 25    | 0.247                    |
| 26    | 0.245                    |
| 27    | 0.249                    |
| 28    | 0.263                    |
| 29    | 0.256                    |
| 30    | 0.244                    |

#### C Kernel
| Loop# | Measured Time (seconds) |
|-------|--------------------------|
| 1     | 0.564                    |
| 2     | 0.564                    |
| 3     | 0.575                    |
| 4     | 0.568                    |
| 5     | 0.568                    |
| 6     | 0.592                    |
| 7     | 0.573                    |
| 8     | 0.565                    |
| 9     | 0.567                    |
| 10    | 0.562                    |
| 11    | 0.591                    |
| 12    | 0.570                    |
| 13    | 0.570                    |
| 14    | 0.583                    |
| 15    | 0.577                    |
| 16    | 0.568                    |
| 17    | 0.561                    |
| 18    | 0.566                    |
| 19    | 0.579                    |
| 20    | 0.559                    |
| 21    | 0.564                    |
| 22    | 0.587                    |
| 23    | 0.579                    |
| 24    | 0.573                    |
| 25    | 0.576                    |
| 26    | 0.570                    |
| 27    | 0.574                    |
| 28    | 0.563                    |
| 29    | 0.560                    |
| 30    | 0.574                    |

#### Average Time
Average Time for x86-64 Kernel: 0.248\
Average Time for C Kernel: 0.571

### Total Average Time
Total Average Time for x86-64 Kernel: 0.089\
Total Average Time for C Kernel: 0.204

## RELEASE:
### n = 2<sup>20</sup>
Value of n: 1048576\
Generated values for X:\
3.6 3.0 6.4 1.6 5.8 5.1 7.5 4.3 1.3 2.4\
Generated values for Y:\
9.2 8.2 9.2 1.6 7.4 8.7 8.7 9.1 5.3 8.8

![Correctness Check 1 for Release](correctness_check_1(release).png "Correctness Check 1 for Release")

#### x86-64 Kernel
| Loop# | Measured Time (seconds) |
|-------|--------------------------|
| 1     | 0.002                    |
| 2     | 0.001                    |
| 3     | 0.001                    |
| 4     | 0.001                    |
| 5     | 0.001                    |
| 6     | 0.001                    |
| 7     | 0.002                    |
| 8     | 0.002                    |
| 9     | 0.001                    |
| 10    | 0.001                    |
| 11    | 0.001                    |
| 12    | 0.001                    |
| 13    | 0.002                    |
| 14    | 0.001                    |
| 15    | 0.001                    |
| 16    | 0.002                    |
| 17    | 0.001                    |
| 18    | 0.002                    |
| 19    | 0.002                    |
| 20    | 0.001                    |
| 21    | 0.001                    |
| 22    | 0.002                    |
| 23    | 0.001                    |
| 24    | 0.002                    |
| 25    | 0.001                    |
| 26    | 0.002                    |
| 27    | 0.002                    |
| 28    | 0.002                    |
| 29    | 0.002                    |
| 30    | 0.002                    |

#### C Kernel
| Loop# | Measured Time (seconds) |
|-------|--------------------------|
| 1     | 0.001                    |
| 2     | 0.001                    |
| 3     | 0.001                    |
| 4     | 0.001                    |
| 5     | 0.001                    |
| 6     | 0.001                    |
| 7     | 0.000                    |
| 8     | 0.001                    |
| 9     | 0.001                    |
| 10    | 0.000                    |
| 11    | 0.001                    |
| 12    | 0.000                    |
| 13    | 0.000                    |
| 14    | 0.001                    |
| 15    | 0.000                    |
| 16    | 0.001                    |
| 17    | 0.001                    |
| 18    | 0.001                    |
| 19    | 0.001                    |
| 20    | 0.001                    |
| 21    | 0.000                    |
| 22    | 0.001                    |
| 23    | 0.001                    |
| 24    | 0.001                    |
| 25    | 0.001                    |
| 26    | 0.001                    |
| 27    | 0.001                    |
| 28    | 0.000                    |
| 29    | 0.001                    |
| 30    | 0.001                    |

#### Average Time
Average Time for x86-64 Kernel: 0.001\
Average Time for C Kernel: 0.001

### n = 2<sup>24</sup>
Value of n: 16777216\
Generated values for X:\
3.6 3.0 6.4 1.6 5.8 5.1 7.5 4.3 1.3 2.4\
Generated values for Y:\
1.6 2.6 0.8 5.2 8.2 1.1 3.1 7.5 1.7 1.2

![Correctness Check 2 for Release](correctness_check_2(release).png "Correctness Check 2 for Release")

#### x86-64 Kernel
| Loop# | Measured Time (seconds) |
|-------|--------------------------|
| 1     | 0.036                    |
| 2     | 0.039                    |
| 3     | 0.037                    |
| 4     | 0.038                    |
| 5     | 0.039                    |
| 6     | 0.038                    |
| 7     | 0.031                    |
| 8     | 0.033                    |
| 9     | 0.030                    |
| 10    | 0.029                    |
| 11    | 0.028                    |
| 12    | 0.026                    |
| 13    | 0.025                    |
| 14    | 0.024                    |
| 15    | 0.020                    |
| 16    | 0.022                    |
| 17    | 0.027                    |
| 18    | 0.021                    |
| 19    | 0.020                    |
| 20    | 0.020                    |
| 21    | 0.019                    |
| 22    | 0.019                    |
| 23    | 0.019                    |
| 24    | 0.019                    |
| 25    | 0.019                    |
| 26    | 0.019                    |
| 27    | 0.019                    |
| 28    | 0.022                    |
| 29    | 0.020                    |
| 30    | 0.028                    |

#### C Kernel
| Loop# | Measured Time (seconds) |
|-------|--------------------------|
| 1     | 0.016                    |
| 2     | 0.021                    |
| 3     | 0.020                    |
| 4     | 0.020                    |
| 5     | 0.024                    |
| 6     | 0.023                    |
| 7     | 0.018                    |
| 8     | 0.018                    |
| 9     | 0.015                    |
| 10    | 0.020                    |
| 11    | 0.018                    |
| 12    | 0.015                    |
| 13    | 0.013                    |
| 14    | 0.014                    |
| 15    | 0.012                    |
| 16    | 0.013                    |
| 17    | 0.013                    |
| 18    | 0.011                    |
| 19    | 0.012                    |
| 20    | 0.011                    |
| 21    | 0.011                    |
| 22    | 0.011                    |
| 23    | 0.012                    |
| 24    | 0.011                    |
| 25    | 0.010                    |
| 26    | 0.010                    |
| 27    | 0.012                    |
| 28    | 0.013                    |
| 29    | 0.013                    |
| 30    | 0.014                    |

#### Average Time
Average Time for x86-64 Kernel: 0.026\
Average Time for C Kernel: 0.015

### n = 2<sup>28</sup>
Value of n: 268435456\
Generated values for X:\
4.3 5.9 2.4 0.7 1.9 0.5 0.0 8.8 6.9 9.6\
Generated values for Y:\
3.9 3.9 2.0 8.7 1.5 1.7 9.6 6.8 6.5 0.8

![Correctness Check 3 for Release](correctness_check_3(release).png "Correctness Check 3 for Release")

#### x86-64 Kernel
| Loop# | Measured Time (seconds) |
|-------|--------------------------|
| 1     | 0.463                    |
| 2     | 0.466                    |
| 3     | 0.412                    |
| 4     | 0.315                    |
| 5     | 0.293                    |
| 6     | 0.320                    |
| 7     | 0.390                    |
| 8     | 0.265                    |
| 9     | 0.258                    |
| 10    | 0.243                    |
| 11    | 0.256                    |
| 12    | 0.267                    |
| 13    | 0.250                    |
| 14    | 0.266                    |
| 15    | 0.249                    |
| 16    | 0.268                    |
| 17    | 0.260                    |
| 18    | 0.301                    |
| 19    | 0.301                    |
| 20    | 0.273                    |
| 21    | 0.325                    |
| 22    | 0.262                    |
| 23    | 0.258                    |
| 24    | 0.260                    |
| 25    | 0.279                    |
| 26    | 0.266                    |
| 27    | 0.296                    |
| 28    | 0.274                    |
| 29    | 0.269                    |
| 30    | 0.256                    |

#### C Kernel
| Loop# | Measured Time (seconds) |
|-------|--------------------------|
| 1     | 0.201                    |
| 2     | 0.217                    |
| 3     | 0.209                    |
| 4     | 0.179                    |
| 5     | 0.192                    |
| 6     | 0.213                    |
| 7     | 0.187                    |
| 8     | 0.177                    |
| 9     | 0.171                    |
| 10    | 0.172                    |
| 11    | 0.193                    |
| 12    | 0.180                    |
| 13    | 0.182                    |
| 14    | 0.174                    |
| 15    | 0.175                    |
| 16    | 0.187                    |
| 17    | 0.181                    |
| 18    | 0.193                    |
| 19    | 0.199                    |
| 20    | 0.195                    |
| 21    | 0.192                    |
| 22    | 0.175                    |
| 23    | 0.170                    |
| 24    | 0.186                    |
| 25    | 0.180                    |
| 26    | 0.210                    |
| 27    | 0.195                    |
| 28    | 0.172                    |
| 29    | 0.177                    |
| 30    | 0.173                    |

#### Average Time
Average Time for x86-64 Kernel: 0.295\
Average Time for C Kernel: 0.187

### Total Average Time
Total Average Time for x86-64 Kernel: 0.108\
Total Average Time for C Kernel: 0.067

## Analysis
We can observe that the average execution time in debug mode highly favors the x86-64 version of the kernel, having less than half of the average execution time of the C version.
With release mode, we can see a drastic improvement with the performance of the C kernel, while the performance of the x86-64 version is slightly worse by about 20ms.
This is consistent with release mode being configured for optimization, resulting in a faster overall execution time when both kernels are averaged. 


## Program Output (with Correctness Check)

![Correctness Check Overall](correctness_check_overall.png "Correctness Check Overall")

Output rounded to two decimal places ensures that C output is correct, and x86-64 version matches output with the C version.