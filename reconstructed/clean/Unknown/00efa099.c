// Function: FUN_00efa099
// Address: 00efa099
// Size: 3738 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"
//   "/System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation"
//   "/System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox"
//   "crypto/bio/bio_meth.c"

uint64_t FUN_00efa099(void *param_1,uint64_t param_2,size_t param_3,int param_4)

{
  int *piVar1;
  void*puVar2;
  void*puVar3;
  code *pcVar4;
  bool bVar5;
  uint64_t uVar6;
  int64_t lVar7;
  void *pvVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int *piVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint uVar14;
  int *this_ptr;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t lVar17;
  bool bVar18;
  
  this_ptr[0xe6] = 1;
  _memcpy(param_1,section_000000b8.segname + 8,param_3);
  if (this_ptr[0x50] == 1) {
    _ZSTD_ldm_adjustParameters();
  }
  uVar13 = 1L << (*(byte *)(this_ptr + 0x39) & 0x3f);
  if (param_2 <= uVar13) {
    uVar13 = param_2;
  }
  if (param_2 == 0) {
    uVar13 = 1;
  }
  uVar15 = *(uint64_t *)(this_ptr + 0x68);
  if (uVar13 <= *(uint64_t *)(this_ptr + 0x68)) {
    uVar15 = uVar13;
  }
  uVar10 = 4 - (uint64_t)(this_ptr[0x66] != 0 || this_ptr[0x3d] == 3);
  lVar12 = 0;
  uVar6 = uVar15 / uVar10;
  lVar17 = 0;
  if (param_4 == 1) {
    if (this_ptr[0x58] == 0) {
      if (uVar15 < 0xff00ff00ff00ff00) {
        uVar16 = 0;
        if (uVar15 < 0x20000) {
          uVar16 = -(uVar15 - 0x20000) >> 0xb;
        }
        lVar12 = (uVar15 >> 8) + uVar15 + uVar16;
        if (lVar12 == 0) goto LAB_00efa1b3;
      }
      else {
LAB_00efa1b3:
        lVar12 = -0x48;
      }
      lVar12 = lVar12 + 1;
    }
    else {
      lVar12 = 0;
    }
    lVar17 = 0;
    if (this_ptr[0x57] == 0) {
      lVar17 = uVar13 + uVar15;
    }
  }
  lVar7 = _ZSTD_ldm_getMaxNbSeq(this_ptr[0x50],uVar15 % uVar10);
  bVar18 = true;
  if (((uint64_t)(*(int64_t *)(this_ptr + 0x31e) - *(int64_t *)(this_ptr + 800)) < 0xdf000001)
     && (param_1 < (void *)0x20000000)) {
    bVar18 = this_ptr[0xe7] == 0;
  }
  uVar13 = FUN_00ef463e(this_ptr[0x5c],*(int64_t *)(this_ptr + 0xdc) != 0,lVar17,lVar12);
  if (0xffffffffffffff88 < uVar13) {
    return uVar13;
  }
  if (*(int64_t *)(this_ptr + 0xdc) == 0) {
    this_ptr[0xb3] = this_ptr[0xb3] + 1;
  }
  lVar9 = *(int64_t *)(this_ptr + 0xa4);
  bVar5 = false;
  if (uVar13 * 3 <= (uint64_t)(*(int64_t *)(this_ptr + 0xae) - *(int64_t *)(this_ptr + 0xaa)))
  {
    bVar5 = 0x80 < this_ptr[0xb3];
  }
  piVar1 = this_ptr + 0xa4;
  if ((*(uint64_t *)(this_ptr + 0xa6) - lVar9 < uVar13) || (bVar5)) {
    if (*(int64_t *)(this_ptr + 0xdc) != 0) {
      return 0xffffffffffffffc0;
    }
    pcVar4 = *(code **)(this_ptr + 0xd6);
    this_ptr[0xb0] = 0;
    this_ptr[0xb1] = 0;
    this_ptr[0xb2] = 0;
    this_ptr[0xb3] = 0;
    this_ptr[0xac] = 0;
    this_ptr[0xad] = 0;
    this_ptr[0xae] = 0;
    this_ptr[0xaf] = 0;
    this_ptr[0xa8] = 0;
    this_ptr[0xa9] = 0;
    this_ptr[0xaa] = 0;
    this_ptr[0xab] = 0;
    piVar1[0] = 0;
    piVar1[1] = 0;
    this_ptr[0xa6] = 0;
    this_ptr[0xa7] = 0;
    this_ptr[0xb4] = 0;
    this_ptr[0xb5] = 0;
    piVar11 = piVar1;
    if (lVar9 != 0) {
      if (pcVar4 == 0x0) {
        _free(piVar1);
      }
      else {
        (*pcVar4)();
      }
    }
    if (*(code **)(this_ptr + 0xd4) == 0x0) {
      pvVar8 = _malloc((size_t)piVar11);
    }
    else {
      pvVar8 = (void *)(**(code **)(this_ptr + 0xd4))();
    }
    if (pvVar8 == (void *)0x0) {
      return 0xffffffffffffffc0;
    }
    *(void **)(this_ptr + 0xa4) = pvVar8;
    *(uint64_t *)(this_ptr + 0xa6) = (int64_t)pvVar8 + uVar13;
    *(void **)(this_ptr + 0xa8) = pvVar8;
    *(void **)(this_ptr + 0xac) = pvVar8;
    uVar16 = (int64_t)pvVar8 + uVar13 & 0xffffffffffffffc0;
    *(uint64_t *)(this_ptr + 0xb0) = uVar16;
    this_ptr[0xb5] = 0;
    *(void **)(this_ptr + 0xaa) = pvVar8;
    *(uint64_t *)(this_ptr + 0xae) = uVar16;
    *(void*)(this_ptr + 0xb2) = 0;
    this_ptr[0xb3] = 0;
    this_ptr[0xb4] = 0;
    if ((int64_t)uVar13 < 0x1600) {
      *(void*)(this_ptr + 0xb2) = 1;
      this_ptr[0x31a] = 0;
      this_ptr[0x31b] = 0;
      return 0xffffffffffffffc0;
    }
    puVar2 = &g_00001600 + (int64_t)pvVar8;
    *(void**)(this_ptr + 0xa8) = puVar2;
    *(void**)(this_ptr + 0xaa) = puVar2;
    *(void**)(this_ptr + 0xac) = puVar2;
    *(void **)(this_ptr + 0x31a) = pvVar8;
    if ((int64_t)uVar13 < 0x2c00) {
      *(void*)(this_ptr + 0xb2) = 1;
      this_ptr[0x31c] = 0;
      this_ptr[0x31d] = 0;
      return 0xffffffffffffffc0;
    }
    puVar3 = &UNK_00002c00 + (int64_t)pvVar8;
    *(void**)(this_ptr + 0xa8) = puVar3;
    *(void**)(this_ptr + 0xaa) = puVar3;
    *(void**)(this_ptr + 0xac) = puVar3;
    *(void**)(this_ptr + 0x31c) = puVar2;
    if ((int64_t)uVar13 < 0x4ed8) {
      *(void*)(this_ptr + 0xb2) = 1;
      this_ptr[0x36a] = 0;
      this_ptr[0x36b] = 0;
      return 0xffffffffffffffc0;
    }
    lVar9 = (int64_t)pvVar8 + 0x4ed8;
    *(int64_t *)(this_ptr + 0xa8) = lVar9;
    *(int64_t *)(this_ptr + 0xac) = lVar9;
    *(void**)(this_ptr + 0x36a) = puVar3;
    bVar18 = true;
    uVar14 = 0;
  }
  else {
    lVar9 = *(int64_t *)(this_ptr + 0xa8);
    uVar14 = this_ptr[0xb4];
    uVar16 = *(uint64_t *)(this_ptr + 0xa6) & 0xffffffffffffffc0;
  }
  *(int64_t *)(this_ptr + 0xaa) = lVar9;
  *(uint64_t *)(this_ptr + 0xae) = uVar16;
  *(void*)(this_ptr + 0xb2) = 0;
  if (1 < uVar14) {
    this_ptr[0xb4] = 1;
  }
  this_ptr[0x361] = this_ptr[0x3c];
  this_ptr[0x362] = this_ptr[0x3d];
  this_ptr[0x363] = this_ptr[0x3e];
  this_ptr[0x364] = this_ptr[0x3f];
  *(void*)(this_ptr + 0x35e) = *(void*)(this_ptr + 0x39);
  *(void*)(this_ptr + 0x360) = *(void*)(this_ptr + 0x3b);
  this_ptr[0x368] = (uint)(this_ptr[100] == 1);
  *(uint64_t *)(this_ptr + 0xb8) = param_2 + 1;
  this_ptr[0xba] = 0;
  this_ptr[0xbb] = 0;
  this_ptr[0xbc] = 0;
  this_ptr[0xbd] = 0;
  if (param_2 + 1 == 0) {
    this_ptr[0x40] = 0;
  }
  *(uint64_t *)(this_ptr + 0xb6) = uVar15;
  _ZSTD_XXH64_reset(piVar1);
  *this_ptr = 1;
  this_ptr[0xa0] = 0;
  this_ptr[0xa2] = 0;
  this_ptr[0xa3] = 0;
  lVar9 = *(int64_t *)(this_ptr + 0x31a);
  *(void*)(&g_000015f0 + lVar9) = g_023e2758;
  *(void*)(&g_000015f8 + lVar9) = g_023e2760;
  *(void*)(lVar9 + 0x808) = 0;
  *(void*)(&g_000015e4 + lVar9) = 0;
  *(void*)(&g_000015ec + lVar9) = 0;
  uVar13 = FUN_00efaf33(this_ptr[0x5c],this_ptr + 0x39,param_3,bVar18);
  if (0xffffffffffffff88 < uVar13) {
    return uVar13;
  }
  uVar14 = this_ptr[0xb4];
  if (uVar14 < 2) {
    if (uVar14 != 0) {
LAB_00efa447:
      this_ptr[0xb4] = 2;
      uVar14 = 2;
      goto LAB_00efa4ca;
    }
    lVar9 = *(int64_t *)(this_ptr + 0xa8);
    *(int64_t *)(this_ptr + 0xac) = lVar9;
    *(uint64_t *)(this_ptr + 0xb0) = *(uint64_t *)(this_ptr + 0xa6) & 0xffffffffffffffc0;
    uVar16 = (uint64_t)(-(int)lVar9 & 0x3f);
    uVar13 = lVar9 + uVar16;
    if (uVar13 <= *(uint64_t *)(this_ptr + 0xa6)) {
      *(uint64_t *)(this_ptr + 0xa8) = uVar13;
      *(uint64_t *)(this_ptr + 0xaa) = uVar13;
      if (uVar16 != 0) {
        *(uint64_t *)(this_ptr + 0xac) = uVar13;
      }
      goto LAB_00efa447;
    }
    uVar14 = 0;
LAB_00efa546:
    uVar13 = 0;
  }
  else {
LAB_00efa4ca:
    uVar13 = uVar6 * 8 + 0x3f & 0xffffffffffffffc0;
    if (uVar13 == 0) goto LAB_00efa546;
    uVar13 = *(int64_t *)(this_ptr + 0xae) - uVar13;
    if (uVar13 < *(uint64_t *)(this_ptr + 0xaa)) {
      *(void*)(this_ptr + 0xb2) = 1;
      goto LAB_00efa546;
    }
    if (uVar13 < *(uint64_t *)(this_ptr + 0xac)) {
      *(uint64_t *)(this_ptr + 0xac) = uVar13;
    }
    *(uint64_t *)(this_ptr + 0xae) = uVar13;
  }
  *(uint64_t *)(this_ptr + 0xe8) = uVar13;
  if (this_ptr[0x50] == 1) {
    if (uVar14 < 2) {
      lVar9 = *(int64_t *)(this_ptr + 0xa8);
      *(int64_t *)(this_ptr + 0xac) = lVar9;
      *(uint64_t *)(this_ptr + 0xb0) = *(uint64_t *)(this_ptr + 0xa6) & 0xffffffffffffffc0;
      uVar16 = (uint64_t)(-(int)lVar9 & 0x3f);
      uVar13 = lVar9 + uVar16;
      if (uVar13 <= *(uint64_t *)(this_ptr + 0xa6)) {
        *(uint64_t *)(this_ptr + 0xa8) = uVar13;
        *(uint64_t *)(this_ptr + 0xaa) = uVar13;
        if (uVar16 != 0) {
          *(uint64_t *)(this_ptr + 0xac) = uVar13;
        }
        this_ptr[0xb4] = 2;
        goto LAB_00efa5c8;
      }
LAB_00efa5f1:
      uVar13 = 0;
    }
    else {
LAB_00efa5c8:
      uVar13 = (8L << (*(byte *)(this_ptr + 0x51) & 0x3f)) + 0x3fU & 0xffffffffffffffc0;
      if (uVar13 == 0) goto LAB_00efa5f1;
      uVar13 = *(int64_t *)(this_ptr + 0xae) - uVar13;
      if (uVar13 < *(uint64_t *)(this_ptr + 0xaa)) {
        *(void*)(this_ptr + 0xb2) = 1;
        goto LAB_00efa5f1;
      }
      if (uVar13 < *(uint64_t *)(this_ptr + 0xac)) {
        *(uint64_t *)(this_ptr + 0xac) = uVar13;
      }
      *(uint64_t *)(this_ptr + 0xae) = uVar13;
    }
    *(uint64_t *)(this_ptr + 0x106) = uVar13;
    ___bzero();
    uVar14 = this_ptr[0xb4];
    if (uVar14 < 2) {
      if (uVar14 != 0) {
LAB_00efa726:
        this_ptr[0xb4] = 2;
        uVar14 = 2;
        goto LAB_00efa744;
      }
      lVar9 = *(int64_t *)(this_ptr + 0xa8);
      *(int64_t *)(this_ptr + 0xac) = lVar9;
      *(uint64_t *)(this_ptr + 0xb0) = *(uint64_t *)(this_ptr + 0xa6) & 0xffffffffffffffc0;
      uVar16 = (uint64_t)(-(int)lVar9 & 0x3f);
      uVar13 = lVar9 + uVar16;
      if (uVar13 <= *(uint64_t *)(this_ptr + 0xa6)) {
        *(uint64_t *)(this_ptr + 0xa8) = uVar13;
        *(uint64_t *)(this_ptr + 0xaa) = uVar13;
        if (uVar16 != 0) {
          *(uint64_t *)(this_ptr + 0xac) = uVar13;
        }
        goto LAB_00efa726;
      }
      uVar14 = 0;
      uVar13 = 0;
    }
    else {
LAB_00efa744:
      uVar13 = lVar7 * 0xc + 0x3fU & 0xffffffffffffffc0;
      if (uVar13 != 0) {
        uVar13 = *(int64_t *)(this_ptr + 0xae) - uVar13;
        if (*(uint64_t *)(this_ptr + 0xaa) <= uVar13) {
          if (uVar13 < *(uint64_t *)(this_ptr + 0xac)) {
            *(uint64_t *)(this_ptr + 0xac) = uVar13;
          }
          *(uint64_t *)(this_ptr + 0xae) = uVar13;
          goto LAB_00efa83d;
        }
        *(void*)(this_ptr + 0xb2) = 1;
      }
      uVar13 = 0;
    }
LAB_00efa83d:
    *(uint64_t *)(this_ptr + 0x30c) = uVar13;
    *(int64_t *)(this_ptr + 0x30e) = lVar7;
    this_ptr[0x104] = 0;
    this_ptr[0x105] = 0;
    *(char **)(this_ptr + 0xfe) = " ";
    *(char **)(this_ptr + 0x100) = " ";
    this_ptr[0x102] = 2;
    this_ptr[0x103] = 2;
    *(char **)(this_ptr + 0xfc) = "crypto/bio/bio_meth.c";
    this_ptr[0x108] = 0;
  }
  if (this_ptr[0x66] != 0) {
    lVar7 = uVar15 / 3 + 1;
    *(int64_t *)(this_ptr + 0x51a) = lVar7;
    if (uVar14 < 2) {
      lVar9 = *(int64_t *)(this_ptr + 0xa8);
      *(int64_t *)(this_ptr + 0xac) = lVar9;
      *(uint64_t *)(this_ptr + 0xb0) = *(uint64_t *)(this_ptr + 0xa6) & 0xffffffffffffffc0;
      uVar16 = (uint64_t)(-(int)lVar9 & 0x3f);
      uVar13 = lVar9 + uVar16;
      if (uVar13 <= *(uint64_t *)(this_ptr + 0xa6)) {
        *(uint64_t *)(this_ptr + 0xa8) = uVar13;
        *(uint64_t *)(this_ptr + 0xaa) = uVar13;
        if (uVar16 != 0) {
          *(uint64_t *)(this_ptr + 0xac) = uVar13;
        }
        this_ptr[0xb4] = 2;
        uVar14 = 2;
        goto LAB_00efa925;
      }
      uVar14 = 0;
LAB_00efa94e:
      uVar13 = 0;
    }
    else {
LAB_00efa925:
      uVar13 = lVar7 * 0x10 + 0x3fU & 0xffffffffffffffc0;
      if (uVar13 == 0) goto LAB_00efa94e;
      uVar13 = *(int64_t *)(this_ptr + 0xae) - uVar13;
      if (uVar13 < *(uint64_t *)(this_ptr + 0xaa)) {
        *(void*)(this_ptr + 0xb2) = 1;
        goto LAB_00efa94e;
      }
      if (uVar13 < *(uint64_t *)(this_ptr + 0xac)) {
        *(uint64_t *)(this_ptr + 0xac) = uVar13;
      }
      *(uint64_t *)(this_ptr + 0xae) = uVar13;
    }
    *(uint64_t *)(this_ptr + 0x518) = uVar13;
  }
  if (uVar14 < 3) {
    if (uVar14 != 0) {
LAB_00efa979:
      this_ptr[0xb4] = 3;
      uVar14 = 3;
      goto LAB_00efa989;
    }
    lVar7 = *(int64_t *)(this_ptr + 0xa8);
    *(int64_t *)(this_ptr + 0xac) = lVar7;
    *(uint64_t *)(this_ptr + 0xb0) = *(uint64_t *)(this_ptr + 0xa6) & 0xffffffffffffffc0;
    uVar16 = (uint64_t)(-(int)lVar7 & 0x3f);
    uVar13 = lVar7 + uVar16;
    if (uVar13 <= *(uint64_t *)(this_ptr + 0xa6)) {
      *(uint64_t *)(this_ptr + 0xa8) = uVar13;
      *(uint64_t *)(this_ptr + 0xaa) = uVar13;
      if (uVar16 != 0) {
        *(uint64_t *)(this_ptr + 0xac) = uVar13;
      }
      goto LAB_00efa979;
    }
    uVar14 = 0;
LAB_00efaa01:
    uVar13 = 0;
  }
  else {
LAB_00efa989:
    if (uVar15 == 0xffffffffffffffe0) goto LAB_00efaa01;
    uVar13 = (*(int64_t *)(this_ptr + 0xae) - uVar15) - 0x20;
    if (uVar13 < *(uint64_t *)(this_ptr + 0xaa)) {
      *(void*)(this_ptr + 0xb2) = 1;
      goto LAB_00efaa01;
    }
    if (uVar13 < *(uint64_t *)(this_ptr + 0xac)) {
      *(uint64_t *)(this_ptr + 0xac) = uVar13;
    }
    *(uint64_t *)(this_ptr + 0xae) = uVar13;
  }
  *(uint64_t *)(this_ptr + 0xec) = uVar13;
  *(uint64_t *)(this_ptr + 0xf8) = uVar15;
  this_ptr[0x36c] = param_4;
  *(int64_t *)(this_ptr + 0x370) = lVar17;
  if (uVar14 < 3) {
    lVar7 = *(int64_t *)(this_ptr + 0xa8);
    *(int64_t *)(this_ptr + 0xac) = lVar7;
    *(uint64_t *)(this_ptr + 0xb0) = *(uint64_t *)(this_ptr + 0xa6) & 0xffffffffffffffc0;
    uVar16 = (uint64_t)(-(int)lVar7 & 0x3f);
    uVar13 = lVar7 + uVar16;
    if (uVar13 <= *(uint64_t *)(this_ptr + 0xa6)) {
      *(uint64_t *)(this_ptr + 0xa8) = uVar13;
      *(uint64_t *)(this_ptr + 0xaa) = uVar13;
      if (uVar16 != 0) {
        *(uint64_t *)(this_ptr + 0xac) = uVar13;
      }
      this_ptr[0xb4] = 3;
      uVar14 = 3;
      goto LAB_00efaad6;
    }
    this_ptr[0x36e] = 0;
    this_ptr[0x36f] = 0;
    *(int64_t *)(this_ptr + 0x37a) = lVar12;
    lVar17 = *(int64_t *)(this_ptr + 0xa8);
    *(int64_t *)(this_ptr + 0xac) = lVar17;
    *(uint64_t *)(this_ptr + 0xb0) = *(uint64_t *)(this_ptr + 0xa6) & 0xffffffffffffffc0;
    uVar16 = (uint64_t)(-(int)lVar17 & 0x3f);
    uVar13 = lVar17 + uVar16;
    if (uVar13 <= *(uint64_t *)(this_ptr + 0xa6)) {
      *(uint64_t *)(this_ptr + 0xa8) = uVar13;
      *(uint64_t *)(this_ptr + 0xaa) = uVar13;
      if (uVar16 != 0) {
        *(uint64_t *)(this_ptr + 0xac) = uVar13;
      }
      this_ptr[0xb4] = 3;
      uVar14 = 3;
      goto LAB_00efab1f;
    }
    uVar14 = 0;
LAB_00efab3f:
    uVar13 = 0;
  }
  else {
LAB_00efaad6:
    if (lVar17 == 0) {
LAB_00efaaf6:
      uVar13 = 0;
    }
    else {
      uVar13 = *(int64_t *)(this_ptr + 0xae) - lVar17;
      if (uVar13 < *(uint64_t *)(this_ptr + 0xaa)) {
        *(void*)(this_ptr + 0xb2) = 1;
        goto LAB_00efaaf6;
      }
      if (uVar13 < *(uint64_t *)(this_ptr + 0xac)) {
        *(uint64_t *)(this_ptr + 0xac) = uVar13;
      }
      *(uint64_t *)(this_ptr + 0xae) = uVar13;
    }
    *(uint64_t *)(this_ptr + 0x36e) = uVar13;
    *(int64_t *)(this_ptr + 0x37a) = lVar12;
LAB_00efab1f:
    if (lVar12 == 0) goto LAB_00efab3f;
    uVar13 = *(int64_t *)(this_ptr + 0xae) - lVar12;
    if (uVar13 < *(uint64_t *)(this_ptr + 0xaa)) {
      *(void*)(this_ptr + 0xb2) = 1;
      goto LAB_00efab3f;
    }
    if (uVar13 < *(uint64_t *)(this_ptr + 0xac)) {
      *(uint64_t *)(this_ptr + 0xac) = uVar13;
    }
    *(uint64_t *)(this_ptr + 0xae) = uVar13;
  }
  *(uint64_t *)(this_ptr + 0x378) = uVar13;
  if (this_ptr[0x50] == 1) {
    if (uVar14 < 3) {
      lVar17 = *(int64_t *)(this_ptr + 0xa8);
      *(int64_t *)(this_ptr + 0xac) = lVar17;
      *(uint64_t *)(this_ptr + 0xb0) = *(uint64_t *)(this_ptr + 0xa6) & 0xffffffffffffffc0;
      uVar16 = (uint64_t)(-(int)lVar17 & 0x3f);
      uVar13 = lVar17 + uVar16;
      if (uVar13 <= *(uint64_t *)(this_ptr + 0xa6)) {
        *(uint64_t *)(this_ptr + 0xa8) = uVar13;
        *(uint64_t *)(this_ptr + 0xaa) = uVar13;
        if (uVar16 != 0) {
          *(uint64_t *)(this_ptr + 0xac) = uVar13;
        }
        this_ptr[0xb4] = 3;
        goto LAB_00efabe1;
      }
LAB_00efabfc:
      uVar13 = 0;
    }
    else {
LAB_00efabe1:
      uVar13 = *(int64_t *)(this_ptr + 0xae) -
               (1L << ((char)this_ptr[0x51] - (char)this_ptr[0x52] & 0x3fU));
      if (uVar13 < *(uint64_t *)(this_ptr + 0xaa)) {
        *(void*)(this_ptr + 0xb2) = 1;
        goto LAB_00efabfc;
      }
      if (uVar13 < *(uint64_t *)(this_ptr + 0xac)) {
        *(uint64_t *)(this_ptr + 0xac) = uVar13;
      }
      *(uint64_t *)(this_ptr + 0xae) = uVar13;
    }
    *(uint64_t *)(this_ptr + 0x10a) = uVar13;
    ___bzero();
  }
  if ((*this_ptr == 1) && (this_ptr[0x50] != 1)) {
    this_ptr[0x314] = 0;
    this_ptr[0x315] = 0;
    this_ptr[0x316] = 0;
    this_ptr[0x317] = 0;
    this_ptr[0x310] = 0;
    this_ptr[0x311] = 0;
    this_ptr[0x312] = 0;
    this_ptr[0x313] = 0;
    this_ptr[0x318] = 0;
    this_ptr[0x319] = 0;
  }
  *(uint64_t *)(this_ptr + 0xf6) = uVar6;
  if ((uint)this_ptr[0xb4] < 3) {
    if (this_ptr[0xb4] != 0) {
LAB_00efac71:
      this_ptr[0xb4] = 3;
      goto LAB_00efac7c;
    }
    lVar17 = *(int64_t *)(this_ptr + 0xa8);
    *(int64_t *)(this_ptr + 0xac) = lVar17;
    *(uint64_t *)(this_ptr + 0xb0) = *(uint64_t *)(this_ptr + 0xa6) & 0xffffffffffffffc0;
    uVar16 = (uint64_t)(-(int)lVar17 & 0x3f);
    uVar13 = lVar17 + uVar16;
    if (uVar13 <= *(uint64_t *)(this_ptr + 0xa6)) {
      *(uint64_t *)(this_ptr + 0xa8) = uVar13;
      *(uint64_t *)(this_ptr + 0xaa) = uVar13;
      if (uVar16 != 0) {
        *(uint64_t *)(this_ptr + 0xac) = uVar13;
      }
      goto LAB_00efac71;
    }
    this_ptr[0xf0] = 0;
    this_ptr[0xf1] = 0;
    lVar17 = *(int64_t *)(this_ptr + 0xa8);
    *(int64_t *)(this_ptr + 0xac) = lVar17;
    *(uint64_t *)(this_ptr + 0xb0) = *(uint64_t *)(this_ptr + 0xa6) & 0xffffffffffffffc0;
    uVar16 = (uint64_t)(-(int)lVar17 & 0x3f);
    uVar13 = lVar17 + uVar16;
    if (uVar13 <= *(uint64_t *)(this_ptr + 0xa6)) {
      *(uint64_t *)(this_ptr + 0xa8) = uVar13;
      *(uint64_t *)(this_ptr + 0xaa) = uVar13;
      if (uVar16 != 0) {
        *(uint64_t *)(this_ptr + 0xac) = uVar13;
      }
      this_ptr[0xb4] = 3;
      goto LAB_00efacbe;
    }
    this_ptr[0xf2] = 0;
    this_ptr[0xf3] = 0;
    lVar17 = *(int64_t *)(this_ptr + 0xa8);
    *(int64_t *)(this_ptr + 0xac) = lVar17;
    *(uint64_t *)(this_ptr + 0xb0) = *(uint64_t *)(this_ptr + 0xa6) & 0xffffffffffffffc0;
    uVar16 = (uint64_t)(-(int)lVar17 & 0x3f);
    uVar13 = lVar17 + uVar16;
    if (uVar13 <= *(uint64_t *)(this_ptr + 0xa6)) {
      *(uint64_t *)(this_ptr + 0xa8) = uVar13;
      *(uint64_t *)(this_ptr + 0xaa) = uVar13;
      if (uVar16 != 0) {
        *(uint64_t *)(this_ptr + 0xac) = uVar13;
      }
      this_ptr[0xb4] = 3;
      goto LAB_00efad00;
    }
  }
  else {
LAB_00efac7c:
    if (uVar15 < uVar10) {
LAB_00efac9c:
      uVar13 = 0;
    }
    else {
      uVar13 = *(int64_t *)(this_ptr + 0xae) - uVar6;
      if (uVar13 < *(uint64_t *)(this_ptr + 0xaa)) {
        *(void*)(this_ptr + 0xb2) = 1;
        goto LAB_00efac9c;
      }
      if (uVar13 < *(uint64_t *)(this_ptr + 0xac)) {
        *(uint64_t *)(this_ptr + 0xac) = uVar13;
      }
      *(uint64_t *)(this_ptr + 0xae) = uVar13;
    }
    *(uint64_t *)(this_ptr + 0xf0) = uVar13;
LAB_00efacbe:
    if (uVar15 < uVar10) {
LAB_00efacde:
      uVar13 = 0;
    }
    else {
      uVar13 = *(int64_t *)(this_ptr + 0xae) - uVar6;
      if (uVar13 < *(uint64_t *)(this_ptr + 0xaa)) {
        *(void*)(this_ptr + 0xb2) = 1;
        goto LAB_00efacde;
      }
      if (uVar13 < *(uint64_t *)(this_ptr + 0xac)) {
        *(uint64_t *)(this_ptr + 0xac) = uVar13;
      }
      *(uint64_t *)(this_ptr + 0xae) = uVar13;
    }
    *(uint64_t *)(this_ptr + 0xf2) = uVar13;
LAB_00efad00:
    if (uVar10 <= uVar15) {
      uVar6 = *(int64_t *)(this_ptr + 0xae) - uVar6;
      if (*(uint64_t *)(this_ptr + 0xaa) <= uVar6) {
        if (uVar6 < *(uint64_t *)(this_ptr + 0xac)) {
          *(uint64_t *)(this_ptr + 0xac) = uVar6;
        }
        *(uint64_t *)(this_ptr + 0xae) = uVar6;
        goto LAB_00efad3b;
      }
      *(void*)(this_ptr + 0xb2) = 1;
    }
  }
  uVar6 = 0;
LAB_00efad3b:
  *(uint64_t *)(this_ptr + 0xf4) = uVar6;
  this_ptr[0xe7] = 1;
  return 0;
}

