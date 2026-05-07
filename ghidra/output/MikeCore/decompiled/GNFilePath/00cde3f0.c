// Function: FUN_00cde3f0
// Address: 00cde3f0
// Size: 3571 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"
//   "GNFileType"
//   "getDirectory"
//   "getPosixPath"
//   "getFileExtension"
//   "getLastPathComponentWithoutExtension"
//   "getFileType"
//   "isFile"
//   "getLastPathComponent"
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cde3f0(void)

{
  int iVar1;
  
  if (DAT_028a73c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde10 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d1818 = FUN_00d4fe50();
          DAT_026d1800 = "GNFilePath";
          _DAT_026d1808 = 0x40;
          _DAT_026d1810 = FUN_00041050;
          _DAT_026d1820 = 0;
          uRam00000000026d1828 = 0;
          _DAT_026d1830 = 0;
          uRam00000000026d1838 = 0;
          _DAT_026d1840 = 0;
          uRam00000000026d1848 = 0;
          _DAT_026d1850 = 0;
          uRam00000000026d1858 = 0;
          _DAT_026d1860 = 0;
          uRam00000000026d1868 = 0;
          _DAT_026d1870 = 0;
          uRam00000000026d1878 = 0;
          _DAT_026d1880 = 0;
          uRam00000000026d1888 = 0;
          _DAT_026d1890 = 0;
          uRam00000000026d1898 = 0;
          _DAT_026d18a0 = 0;
          uRam00000000026d18a8 = 0;
          _DAT_026d18b0 = 0;
          uRam00000000026d18b8 = 0;
          _DAT_026d18c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a7380 = "getPosixPath";
      _DAT_028a7388 = &DAT_026d1800;
      _DAT_028a7390 = 0;
      _DAT_028a7398 = &DAT_027756b8;
      _DAT_028a73a0 = FUN_00ceb4d0;
      _DAT_028a73a8 = _DAT_023dc990;
      uRam00000000028a73ac = _UNK_023dc994;
      uRam00000000028a73b0 = _UNK_023dc998;
      uRam00000000028a73b4 = _UNK_023dc99c;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a73b8 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a7408 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde10 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d1818 = FUN_00d4fe50();
          DAT_026d1800 = "GNFilePath";
          _DAT_026d1808 = 0x40;
          _DAT_026d1810 = FUN_00041050;
          _DAT_026d1820 = 0;
          uRam00000000026d1828 = 0;
          _DAT_026d1830 = 0;
          uRam00000000026d1838 = 0;
          _DAT_026d1840 = 0;
          uRam00000000026d1848 = 0;
          _DAT_026d1850 = 0;
          uRam00000000026d1858 = 0;
          _DAT_026d1860 = 0;
          uRam00000000026d1868 = 0;
          _DAT_026d1870 = 0;
          uRam00000000026d1878 = 0;
          _DAT_026d1880 = 0;
          uRam00000000026d1888 = 0;
          _DAT_026d1890 = 0;
          uRam00000000026d1898 = 0;
          _DAT_026d18a0 = 0;
          uRam00000000026d18a8 = 0;
          _DAT_026d18b0 = 0;
          uRam00000000026d18b8 = 0;
          _DAT_026d18c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a73c8 = "getFileExtension";
      _DAT_028a73d0 = &DAT_026d1800;
      _DAT_028a73d8 = 0;
      _DAT_028a73e0 = &DAT_027756b8;
      _DAT_028a73e8 = FUN_00ceb4d0;
      _DAT_028a73f0 = _DAT_023dc9a0;
      uRam00000000028a73f4 = _UNK_023dc9a4;
      uRam00000000028a73f8 = _UNK_023dc9a8;
      uRam00000000028a73fc = _UNK_023dc9ac;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a7400 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a7450 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde10 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d1818 = FUN_00d4fe50();
          DAT_026d1800 = "GNFilePath";
          _DAT_026d1808 = 0x40;
          _DAT_026d1810 = FUN_00041050;
          _DAT_026d1820 = 0;
          uRam00000000026d1828 = 0;
          _DAT_026d1830 = 0;
          uRam00000000026d1838 = 0;
          _DAT_026d1840 = 0;
          uRam00000000026d1848 = 0;
          _DAT_026d1850 = 0;
          uRam00000000026d1858 = 0;
          _DAT_026d1860 = 0;
          uRam00000000026d1868 = 0;
          _DAT_026d1870 = 0;
          uRam00000000026d1878 = 0;
          _DAT_026d1880 = 0;
          uRam00000000026d1888 = 0;
          _DAT_026d1890 = 0;
          uRam00000000026d1898 = 0;
          _DAT_026d18a0 = 0;
          uRam00000000026d18a8 = 0;
          _DAT_026d18b0 = 0;
          uRam00000000026d18b8 = 0;
          _DAT_026d18c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a7410 = "getLastPathComponent";
      _DAT_028a7418 = &DAT_026d1800;
      _DAT_028a7420 = 0;
      _DAT_028a7428 = &DAT_027756b8;
      _DAT_028a7430 = FUN_00ceb4d0;
      _DAT_028a7438 = _DAT_023dc9b0;
      uRam00000000028a743c = _UNK_023dc9b4;
      uRam00000000028a7440 = _UNK_023dc9b8;
      uRam00000000028a7444 = _UNK_023dc9bc;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a7448 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a7498 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde10 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d1818 = FUN_00d4fe50();
          DAT_026d1800 = "GNFilePath";
          _DAT_026d1808 = 0x40;
          _DAT_026d1810 = FUN_00041050;
          _DAT_026d1820 = 0;
          uRam00000000026d1828 = 0;
          _DAT_026d1830 = 0;
          uRam00000000026d1838 = 0;
          _DAT_026d1840 = 0;
          uRam00000000026d1848 = 0;
          _DAT_026d1850 = 0;
          uRam00000000026d1858 = 0;
          _DAT_026d1860 = 0;
          uRam00000000026d1868 = 0;
          _DAT_026d1870 = 0;
          uRam00000000026d1878 = 0;
          _DAT_026d1880 = 0;
          uRam00000000026d1888 = 0;
          _DAT_026d1890 = 0;
          uRam00000000026d1898 = 0;
          _DAT_026d18a0 = 0;
          uRam00000000026d18a8 = 0;
          _DAT_026d18b0 = 0;
          uRam00000000026d18b8 = 0;
          _DAT_026d18c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a7458 = "getLastPathComponentWithoutExtension";
      _DAT_028a7460 = &DAT_026d1800;
      _DAT_028a7468 = 0;
      _DAT_028a7470 = &DAT_027756b8;
      _DAT_028a7478 = FUN_00ceb4d0;
      _DAT_028a7480 = _DAT_023dc9c0;
      uRam00000000028a7484 = _UNK_023dc9c4;
      uRam00000000028a7488 = _UNK_023dc9c8;
      uRam00000000028a748c = _UNK_023dc9cc;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a7490 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a74e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde10 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d1818 = FUN_00d4fe50();
          DAT_026d1800 = "GNFilePath";
          _DAT_026d1808 = 0x40;
          _DAT_026d1810 = FUN_00041050;
          _DAT_026d1820 = 0;
          uRam00000000026d1828 = 0;
          _DAT_026d1830 = 0;
          uRam00000000026d1838 = 0;
          _DAT_026d1840 = 0;
          uRam00000000026d1848 = 0;
          _DAT_026d1850 = 0;
          uRam00000000026d1858 = 0;
          _DAT_026d1860 = 0;
          uRam00000000026d1868 = 0;
          _DAT_026d1870 = 0;
          uRam00000000026d1878 = 0;
          _DAT_026d1880 = 0;
          uRam00000000026d1888 = 0;
          _DAT_026d1890 = 0;
          uRam00000000026d1898 = 0;
          _DAT_026d18a0 = 0;
          uRam00000000026d18a8 = 0;
          _DAT_026d18b0 = 0;
          uRam00000000026d18b8 = 0;
          _DAT_026d18c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a74a0 = "getFileType";
      _DAT_028a74a8 = &DAT_026d1800;
      _DAT_028a74b0 = 0;
      _DAT_028a74b8 = &DAT_027756c0;
      _DAT_028a74c0 = FUN_00ceb570;
      _DAT_028a74c8 = _DAT_023dc9d0;
      uRam00000000028a74cc = _UNK_023dc9d4;
      uRam00000000028a74d0 = _UNK_023dc9d8;
      uRam00000000028a74d4 = _UNK_023dc9dc;
      if (DAT_027782e0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d19f8 = FUN_00d4fe50();
          DAT_026d19e0 = "GNFileType";
          _DAT_026d19e8 = 0x48;
          _DAT_026d19f0 = FUN_00042280;
          _DAT_026d1a00 = 0;
          uRam00000000026d1a08 = 0;
          _DAT_026d1a10 = 0;
          uRam00000000026d1a18 = 0;
          _DAT_026d1a20 = 0;
          uRam00000000026d1a28 = 0;
          _DAT_026d1a30 = 0;
          uRam00000000026d1a38 = 0;
          _DAT_026d1a40 = 0;
          uRam00000000026d1a48 = 0;
          _DAT_026d1a50 = 0;
          uRam00000000026d1a58 = 0;
          _DAT_026d1a60 = 0;
          uRam00000000026d1a68 = 0;
          _DAT_026d1a70 = 0;
          uRam00000000026d1a78 = 0;
          _DAT_026d1a80 = 0;
          uRam00000000026d1a88 = 0;
          _DAT_026d1a90 = 0;
          uRam00000000026d1a98 = 0;
          _DAT_026d1aa0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a74d8 = DAT_026d19e0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a7528 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde10 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d1818 = FUN_00d4fe50();
          DAT_026d1800 = "GNFilePath";
          _DAT_026d1808 = 0x40;
          _DAT_026d1810 = FUN_00041050;
          _DAT_026d1820 = 0;
          uRam00000000026d1828 = 0;
          _DAT_026d1830 = 0;
          uRam00000000026d1838 = 0;
          _DAT_026d1840 = 0;
          uRam00000000026d1848 = 0;
          _DAT_026d1850 = 0;
          uRam00000000026d1858 = 0;
          _DAT_026d1860 = 0;
          uRam00000000026d1868 = 0;
          _DAT_026d1870 = 0;
          uRam00000000026d1878 = 0;
          _DAT_026d1880 = 0;
          uRam00000000026d1888 = 0;
          _DAT_026d1890 = 0;
          uRam00000000026d1898 = 0;
          _DAT_026d18a0 = 0;
          uRam00000000026d18a8 = 0;
          _DAT_026d18b0 = 0;
          uRam00000000026d18b8 = 0;
          _DAT_026d18c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a74e8 = "getDirectory";
      _DAT_028a74f0 = &DAT_026d1800;
      _DAT_028a74f8 = 0;
      _DAT_028a7500 = &DAT_027756c8;
      _DAT_028a7508 = FUN_00ceb610;
      _DAT_028a7510 = _DAT_023dc9e0;
      uRam00000000028a7514 = _UNK_023dc9e4;
      uRam00000000028a7518 = _UNK_023dc9e8;
      uRam00000000028a751c = _UNK_023dc9ec;
      if (DAT_026fde10 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d1818 = FUN_00d4fe50();
          DAT_026d1800 = "GNFilePath";
          _DAT_026d1808 = 0x40;
          _DAT_026d1810 = FUN_00041050;
          _DAT_026d1820 = 0;
          uRam00000000026d1828 = 0;
          _DAT_026d1830 = 0;
          uRam00000000026d1838 = 0;
          _DAT_026d1840 = 0;
          uRam00000000026d1848 = 0;
          _DAT_026d1850 = 0;
          uRam00000000026d1858 = 0;
          _DAT_026d1860 = 0;
          uRam00000000026d1868 = 0;
          _DAT_026d1870 = 0;
          uRam00000000026d1878 = 0;
          _DAT_026d1880 = 0;
          uRam00000000026d1888 = 0;
          _DAT_026d1890 = 0;
          uRam00000000026d1898 = 0;
          _DAT_026d18a0 = 0;
          uRam00000000026d18a8 = 0;
          _DAT_026d18b0 = 0;
          uRam00000000026d18b8 = 0;
          _DAT_026d18c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a7520 = DAT_026d1800;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a7570 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fde10 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d1818 = FUN_00d4fe50();
          DAT_026d1800 = "GNFilePath";
          _DAT_026d1808 = 0x40;
          _DAT_026d1810 = FUN_00041050;
          _DAT_026d1820 = 0;
          uRam00000000026d1828 = 0;
          _DAT_026d1830 = 0;
          uRam00000000026d1838 = 0;
          _DAT_026d1840 = 0;
          uRam00000000026d1848 = 0;
          _DAT_026d1850 = 0;
          uRam00000000026d1858 = 0;
          _DAT_026d1860 = 0;
          uRam00000000026d1868 = 0;
          _DAT_026d1870 = 0;
          uRam00000000026d1878 = 0;
          _DAT_026d1880 = 0;
          uRam00000000026d1888 = 0;
          _DAT_026d1890 = 0;
          uRam00000000026d1898 = 0;
          _DAT_026d18a0 = 0;
          uRam00000000026d18a8 = 0;
          _DAT_026d18b0 = 0;
          uRam00000000026d18b8 = 0;
          _DAT_026d18c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a7530 = "isFile";
      _DAT_028a7538 = &DAT_026d1800;
      _DAT_028a7540 = 0;
      _DAT_028a7548 = &DAT_027756ca;
      _DAT_028a7550 = FUN_00ceb6b0;
      _DAT_028a7558 = 0x399;
      _DAT_028a7560 = 0;
      uRam00000000028a7568 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}


