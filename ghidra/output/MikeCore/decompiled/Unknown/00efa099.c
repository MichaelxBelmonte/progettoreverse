// Function: FUN_00efa099
// Address: 00efa099
// Size: 3738 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"
//   "/System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation"
//   "/System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox"
//   "crypto/bio/bio_meth.c"


ulonglong FUN_00efa099(void *param_1,ulonglong param_2,size_t param_3,int param_4)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *pvVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  int *unaff_RDI;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  
  unaff_RDI[0xe6] = 1;
  _memcpy(param_1,section_000000b8.segname + 8,param_3);
  if (unaff_RDI[0x50] == 1) {
    _ZSTD_ldm_adjustParameters();
  }
  uVar13 = 1L << (*(byte *)(unaff_RDI + 0x39) & 0x3f);
  if (param_2 <= uVar13) {
    uVar13 = param_2;
  }
  if (param_2 == 0) {
    uVar13 = 1;
  }
  uVar15 = *(ulonglong *)(unaff_RDI + 0x68);
  if (uVar13 <= *(ulonglong *)(unaff_RDI + 0x68)) {
    uVar15 = uVar13;
  }
  uVar10 = 4 - (ulonglong)(unaff_RDI[0x66] != 0 || unaff_RDI[0x3d] == 3);
  lVar12 = 0;
  uVar6 = uVar15 / uVar10;
  lVar17 = 0;
  if (param_4 == 1) {
    if (unaff_RDI[0x58] == 0) {
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
    if (unaff_RDI[0x57] == 0) {
      lVar17 = uVar13 + uVar15;
    }
  }
  lVar7 = _ZSTD_ldm_getMaxNbSeq(unaff_RDI[0x50],uVar15 % uVar10);
  bVar18 = true;
  if (((ulonglong)(*(longlong *)(unaff_RDI + 0x31e) - *(longlong *)(unaff_RDI + 800)) < 0xdf000001)
     && (param_1 < (void *)0x20000000)) {
    bVar18 = unaff_RDI[0xe7] == 0;
  }
  uVar13 = FUN_00ef463e(unaff_RDI[0x5c],*(longlong *)(unaff_RDI + 0xdc) != 0,lVar17,lVar12);
  if (0xffffffffffffff88 < uVar13) {
    return uVar13;
  }
  if (*(longlong *)(unaff_RDI + 0xdc) == 0) {
    unaff_RDI[0xb3] = unaff_RDI[0xb3] + 1;
  }
  lVar9 = *(longlong *)(unaff_RDI + 0xa4);
  bVar5 = false;
  if (uVar13 * 3 <= (ulonglong)(*(longlong *)(unaff_RDI + 0xae) - *(longlong *)(unaff_RDI + 0xaa)))
  {
    bVar5 = 0x80 < unaff_RDI[0xb3];
  }
  piVar1 = unaff_RDI + 0xa4;
  if ((*(ulonglong *)(unaff_RDI + 0xa6) - lVar9 < uVar13) || (bVar5)) {
    if (*(longlong *)(unaff_RDI + 0xdc) != 0) {
      return 0xffffffffffffffc0;
    }
    pcVar4 = *(code **)(unaff_RDI + 0xd6);
    unaff_RDI[0xb0] = 0;
    unaff_RDI[0xb1] = 0;
    unaff_RDI[0xb2] = 0;
    unaff_RDI[0xb3] = 0;
    unaff_RDI[0xac] = 0;
    unaff_RDI[0xad] = 0;
    unaff_RDI[0xae] = 0;
    unaff_RDI[0xaf] = 0;
    unaff_RDI[0xa8] = 0;
    unaff_RDI[0xa9] = 0;
    unaff_RDI[0xaa] = 0;
    unaff_RDI[0xab] = 0;
    piVar1[0] = 0;
    piVar1[1] = 0;
    unaff_RDI[0xa6] = 0;
    unaff_RDI[0xa7] = 0;
    unaff_RDI[0xb4] = 0;
    unaff_RDI[0xb5] = 0;
    piVar11 = piVar1;
    if (lVar9 != 0) {
      if (pcVar4 == (code *)0x0) {
        _free(piVar1);
      }
      else {
        (*pcVar4)();
      }
    }
    if (*(code **)(unaff_RDI + 0xd4) == (code *)0x0) {
      pvVar8 = _malloc((size_t)piVar11);
    }
    else {
      pvVar8 = (void *)(**(code **)(unaff_RDI + 0xd4))();
    }
    if (pvVar8 == (void *)0x0) {
      return 0xffffffffffffffc0;
    }
    *(void **)(unaff_RDI + 0xa4) = pvVar8;
    *(ulonglong *)(unaff_RDI + 0xa6) = (longlong)pvVar8 + uVar13;
    *(void **)(unaff_RDI + 0xa8) = pvVar8;
    *(void **)(unaff_RDI + 0xac) = pvVar8;
    uVar16 = (longlong)pvVar8 + uVar13 & 0xffffffffffffffc0;
    *(ulonglong *)(unaff_RDI + 0xb0) = uVar16;
    unaff_RDI[0xb5] = 0;
    *(void **)(unaff_RDI + 0xaa) = pvVar8;
    *(ulonglong *)(unaff_RDI + 0xae) = uVar16;
    *(undefined1 *)(unaff_RDI + 0xb2) = 0;
    unaff_RDI[0xb3] = 0;
    unaff_RDI[0xb4] = 0;
    if ((longlong)uVar13 < 0x1600) {
      *(undefined1 *)(unaff_RDI + 0xb2) = 1;
      unaff_RDI[0x31a] = 0;
      unaff_RDI[0x31b] = 0;
      return 0xffffffffffffffc0;
    }
    puVar2 = &DAT_00001600 + (longlong)pvVar8;
    *(undefined **)(unaff_RDI + 0xa8) = puVar2;
    *(undefined **)(unaff_RDI + 0xaa) = puVar2;
    *(undefined **)(unaff_RDI + 0xac) = puVar2;
    *(void **)(unaff_RDI + 0x31a) = pvVar8;
    if ((longlong)uVar13 < 0x2c00) {
      *(undefined1 *)(unaff_RDI + 0xb2) = 1;
      unaff_RDI[0x31c] = 0;
      unaff_RDI[0x31d] = 0;
      return 0xffffffffffffffc0;
    }
    puVar3 = &UNK_00002c00 + (longlong)pvVar8;
    *(undefined **)(unaff_RDI + 0xa8) = puVar3;
    *(undefined **)(unaff_RDI + 0xaa) = puVar3;
    *(undefined **)(unaff_RDI + 0xac) = puVar3;
    *(undefined **)(unaff_RDI + 0x31c) = puVar2;
    if ((longlong)uVar13 < 0x4ed8) {
      *(undefined1 *)(unaff_RDI + 0xb2) = 1;
      unaff_RDI[0x36a] = 0;
      unaff_RDI[0x36b] = 0;
      return 0xffffffffffffffc0;
    }
    lVar9 = (longlong)pvVar8 + 0x4ed8;
    *(longlong *)(unaff_RDI + 0xa8) = lVar9;
    *(longlong *)(unaff_RDI + 0xac) = lVar9;
    *(undefined **)(unaff_RDI + 0x36a) = puVar3;
    bVar18 = true;
    uVar14 = 0;
  }
  else {
    lVar9 = *(longlong *)(unaff_RDI + 0xa8);
    uVar14 = unaff_RDI[0xb4];
    uVar16 = *(ulonglong *)(unaff_RDI + 0xa6) & 0xffffffffffffffc0;
  }
  *(longlong *)(unaff_RDI + 0xaa) = lVar9;
  *(ulonglong *)(unaff_RDI + 0xae) = uVar16;
  *(undefined1 *)(unaff_RDI + 0xb2) = 0;
  if (1 < uVar14) {
    unaff_RDI[0xb4] = 1;
  }
  unaff_RDI[0x361] = unaff_RDI[0x3c];
  unaff_RDI[0x362] = unaff_RDI[0x3d];
  unaff_RDI[0x363] = unaff_RDI[0x3e];
  unaff_RDI[0x364] = unaff_RDI[0x3f];
  *(undefined8 *)(unaff_RDI + 0x35e) = *(undefined8 *)(unaff_RDI + 0x39);
  *(undefined8 *)(unaff_RDI + 0x360) = *(undefined8 *)(unaff_RDI + 0x3b);
  unaff_RDI[0x368] = (uint)(unaff_RDI[100] == 1);
  *(ulonglong *)(unaff_RDI + 0xb8) = param_2 + 1;
  unaff_RDI[0xba] = 0;
  unaff_RDI[0xbb] = 0;
  unaff_RDI[0xbc] = 0;
  unaff_RDI[0xbd] = 0;
  if (param_2 + 1 == 0) {
    unaff_RDI[0x40] = 0;
  }
  *(ulonglong *)(unaff_RDI + 0xb6) = uVar15;
  _ZSTD_XXH64_reset(piVar1);
  *unaff_RDI = 1;
  unaff_RDI[0xa0] = 0;
  unaff_RDI[0xa2] = 0;
  unaff_RDI[0xa3] = 0;
  lVar9 = *(longlong *)(unaff_RDI + 0x31a);
  *(undefined8 *)(&DAT_000015f0 + lVar9) = DAT_023e2758;
  *(undefined4 *)(&DAT_000015f8 + lVar9) = DAT_023e2760;
  *(undefined4 *)(lVar9 + 0x808) = 0;
  *(undefined8 *)(&DAT_000015e4 + lVar9) = 0;
  *(undefined4 *)(&DAT_000015ec + lVar9) = 0;
  uVar13 = FUN_00efaf33(unaff_RDI[0x5c],unaff_RDI + 0x39,param_3,bVar18);
  if (0xffffffffffffff88 < uVar13) {
    return uVar13;
  }
  uVar14 = unaff_RDI[0xb4];
  if (uVar14 < 2) {
    if (uVar14 != 0) {
LAB_00efa447:
      unaff_RDI[0xb4] = 2;
      uVar14 = 2;
      goto LAB_00efa4ca;
    }
    lVar9 = *(longlong *)(unaff_RDI + 0xa8);
    *(longlong *)(unaff_RDI + 0xac) = lVar9;
    *(ulonglong *)(unaff_RDI + 0xb0) = *(ulonglong *)(unaff_RDI + 0xa6) & 0xffffffffffffffc0;
    uVar16 = (ulonglong)(-(int)lVar9 & 0x3f);
    uVar13 = lVar9 + uVar16;
    if (uVar13 <= *(ulonglong *)(unaff_RDI + 0xa6)) {
      *(ulonglong *)(unaff_RDI + 0xa8) = uVar13;
      *(ulonglong *)(unaff_RDI + 0xaa) = uVar13;
      if (uVar16 != 0) {
        *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
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
    uVar13 = *(longlong *)(unaff_RDI + 0xae) - uVar13;
    if (uVar13 < *(ulonglong *)(unaff_RDI + 0xaa)) {
      *(undefined1 *)(unaff_RDI + 0xb2) = 1;
      goto LAB_00efa546;
    }
    if (uVar13 < *(ulonglong *)(unaff_RDI + 0xac)) {
      *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
    }
    *(ulonglong *)(unaff_RDI + 0xae) = uVar13;
  }
  *(ulonglong *)(unaff_RDI + 0xe8) = uVar13;
  if (unaff_RDI[0x50] == 1) {
    if (uVar14 < 2) {
      lVar9 = *(longlong *)(unaff_RDI + 0xa8);
      *(longlong *)(unaff_RDI + 0xac) = lVar9;
      *(ulonglong *)(unaff_RDI + 0xb0) = *(ulonglong *)(unaff_RDI + 0xa6) & 0xffffffffffffffc0;
      uVar16 = (ulonglong)(-(int)lVar9 & 0x3f);
      uVar13 = lVar9 + uVar16;
      if (uVar13 <= *(ulonglong *)(unaff_RDI + 0xa6)) {
        *(ulonglong *)(unaff_RDI + 0xa8) = uVar13;
        *(ulonglong *)(unaff_RDI + 0xaa) = uVar13;
        if (uVar16 != 0) {
          *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
        }
        unaff_RDI[0xb4] = 2;
        goto LAB_00efa5c8;
      }
LAB_00efa5f1:
      uVar13 = 0;
    }
    else {
LAB_00efa5c8:
      uVar13 = (8L << (*(byte *)(unaff_RDI + 0x51) & 0x3f)) + 0x3fU & 0xffffffffffffffc0;
      if (uVar13 == 0) goto LAB_00efa5f1;
      uVar13 = *(longlong *)(unaff_RDI + 0xae) - uVar13;
      if (uVar13 < *(ulonglong *)(unaff_RDI + 0xaa)) {
        *(undefined1 *)(unaff_RDI + 0xb2) = 1;
        goto LAB_00efa5f1;
      }
      if (uVar13 < *(ulonglong *)(unaff_RDI + 0xac)) {
        *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
      }
      *(ulonglong *)(unaff_RDI + 0xae) = uVar13;
    }
    *(ulonglong *)(unaff_RDI + 0x106) = uVar13;
    ___bzero();
    uVar14 = unaff_RDI[0xb4];
    if (uVar14 < 2) {
      if (uVar14 != 0) {
LAB_00efa726:
        unaff_RDI[0xb4] = 2;
        uVar14 = 2;
        goto LAB_00efa744;
      }
      lVar9 = *(longlong *)(unaff_RDI + 0xa8);
      *(longlong *)(unaff_RDI + 0xac) = lVar9;
      *(ulonglong *)(unaff_RDI + 0xb0) = *(ulonglong *)(unaff_RDI + 0xa6) & 0xffffffffffffffc0;
      uVar16 = (ulonglong)(-(int)lVar9 & 0x3f);
      uVar13 = lVar9 + uVar16;
      if (uVar13 <= *(ulonglong *)(unaff_RDI + 0xa6)) {
        *(ulonglong *)(unaff_RDI + 0xa8) = uVar13;
        *(ulonglong *)(unaff_RDI + 0xaa) = uVar13;
        if (uVar16 != 0) {
          *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
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
        uVar13 = *(longlong *)(unaff_RDI + 0xae) - uVar13;
        if (*(ulonglong *)(unaff_RDI + 0xaa) <= uVar13) {
          if (uVar13 < *(ulonglong *)(unaff_RDI + 0xac)) {
            *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
          }
          *(ulonglong *)(unaff_RDI + 0xae) = uVar13;
          goto LAB_00efa83d;
        }
        *(undefined1 *)(unaff_RDI + 0xb2) = 1;
      }
      uVar13 = 0;
    }
LAB_00efa83d:
    *(ulonglong *)(unaff_RDI + 0x30c) = uVar13;
    *(longlong *)(unaff_RDI + 0x30e) = lVar7;
    unaff_RDI[0x104] = 0;
    unaff_RDI[0x105] = 0;
    *(char **)(unaff_RDI + 0xfe) = " ";
    *(char **)(unaff_RDI + 0x100) = " ";
    unaff_RDI[0x102] = 2;
    unaff_RDI[0x103] = 2;
    *(char **)(unaff_RDI + 0xfc) = "crypto/bio/bio_meth.c";
    unaff_RDI[0x108] = 0;
  }
  if (unaff_RDI[0x66] != 0) {
    lVar7 = uVar15 / 3 + 1;
    *(longlong *)(unaff_RDI + 0x51a) = lVar7;
    if (uVar14 < 2) {
      lVar9 = *(longlong *)(unaff_RDI + 0xa8);
      *(longlong *)(unaff_RDI + 0xac) = lVar9;
      *(ulonglong *)(unaff_RDI + 0xb0) = *(ulonglong *)(unaff_RDI + 0xa6) & 0xffffffffffffffc0;
      uVar16 = (ulonglong)(-(int)lVar9 & 0x3f);
      uVar13 = lVar9 + uVar16;
      if (uVar13 <= *(ulonglong *)(unaff_RDI + 0xa6)) {
        *(ulonglong *)(unaff_RDI + 0xa8) = uVar13;
        *(ulonglong *)(unaff_RDI + 0xaa) = uVar13;
        if (uVar16 != 0) {
          *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
        }
        unaff_RDI[0xb4] = 2;
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
      uVar13 = *(longlong *)(unaff_RDI + 0xae) - uVar13;
      if (uVar13 < *(ulonglong *)(unaff_RDI + 0xaa)) {
        *(undefined1 *)(unaff_RDI + 0xb2) = 1;
        goto LAB_00efa94e;
      }
      if (uVar13 < *(ulonglong *)(unaff_RDI + 0xac)) {
        *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
      }
      *(ulonglong *)(unaff_RDI + 0xae) = uVar13;
    }
    *(ulonglong *)(unaff_RDI + 0x518) = uVar13;
  }
  if (uVar14 < 3) {
    if (uVar14 != 0) {
LAB_00efa979:
      unaff_RDI[0xb4] = 3;
      uVar14 = 3;
      goto LAB_00efa989;
    }
    lVar7 = *(longlong *)(unaff_RDI + 0xa8);
    *(longlong *)(unaff_RDI + 0xac) = lVar7;
    *(ulonglong *)(unaff_RDI + 0xb0) = *(ulonglong *)(unaff_RDI + 0xa6) & 0xffffffffffffffc0;
    uVar16 = (ulonglong)(-(int)lVar7 & 0x3f);
    uVar13 = lVar7 + uVar16;
    if (uVar13 <= *(ulonglong *)(unaff_RDI + 0xa6)) {
      *(ulonglong *)(unaff_RDI + 0xa8) = uVar13;
      *(ulonglong *)(unaff_RDI + 0xaa) = uVar13;
      if (uVar16 != 0) {
        *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
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
    uVar13 = (*(longlong *)(unaff_RDI + 0xae) - uVar15) - 0x20;
    if (uVar13 < *(ulonglong *)(unaff_RDI + 0xaa)) {
      *(undefined1 *)(unaff_RDI + 0xb2) = 1;
      goto LAB_00efaa01;
    }
    if (uVar13 < *(ulonglong *)(unaff_RDI + 0xac)) {
      *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
    }
    *(ulonglong *)(unaff_RDI + 0xae) = uVar13;
  }
  *(ulonglong *)(unaff_RDI + 0xec) = uVar13;
  *(ulonglong *)(unaff_RDI + 0xf8) = uVar15;
  unaff_RDI[0x36c] = param_4;
  *(longlong *)(unaff_RDI + 0x370) = lVar17;
  if (uVar14 < 3) {
    lVar7 = *(longlong *)(unaff_RDI + 0xa8);
    *(longlong *)(unaff_RDI + 0xac) = lVar7;
    *(ulonglong *)(unaff_RDI + 0xb0) = *(ulonglong *)(unaff_RDI + 0xa6) & 0xffffffffffffffc0;
    uVar16 = (ulonglong)(-(int)lVar7 & 0x3f);
    uVar13 = lVar7 + uVar16;
    if (uVar13 <= *(ulonglong *)(unaff_RDI + 0xa6)) {
      *(ulonglong *)(unaff_RDI + 0xa8) = uVar13;
      *(ulonglong *)(unaff_RDI + 0xaa) = uVar13;
      if (uVar16 != 0) {
        *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
      }
      unaff_RDI[0xb4] = 3;
      uVar14 = 3;
      goto LAB_00efaad6;
    }
    unaff_RDI[0x36e] = 0;
    unaff_RDI[0x36f] = 0;
    *(longlong *)(unaff_RDI + 0x37a) = lVar12;
    lVar17 = *(longlong *)(unaff_RDI + 0xa8);
    *(longlong *)(unaff_RDI + 0xac) = lVar17;
    *(ulonglong *)(unaff_RDI + 0xb0) = *(ulonglong *)(unaff_RDI + 0xa6) & 0xffffffffffffffc0;
    uVar16 = (ulonglong)(-(int)lVar17 & 0x3f);
    uVar13 = lVar17 + uVar16;
    if (uVar13 <= *(ulonglong *)(unaff_RDI + 0xa6)) {
      *(ulonglong *)(unaff_RDI + 0xa8) = uVar13;
      *(ulonglong *)(unaff_RDI + 0xaa) = uVar13;
      if (uVar16 != 0) {
        *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
      }
      unaff_RDI[0xb4] = 3;
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
      uVar13 = *(longlong *)(unaff_RDI + 0xae) - lVar17;
      if (uVar13 < *(ulonglong *)(unaff_RDI + 0xaa)) {
        *(undefined1 *)(unaff_RDI + 0xb2) = 1;
        goto LAB_00efaaf6;
      }
      if (uVar13 < *(ulonglong *)(unaff_RDI + 0xac)) {
        *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
      }
      *(ulonglong *)(unaff_RDI + 0xae) = uVar13;
    }
    *(ulonglong *)(unaff_RDI + 0x36e) = uVar13;
    *(longlong *)(unaff_RDI + 0x37a) = lVar12;
LAB_00efab1f:
    if (lVar12 == 0) goto LAB_00efab3f;
    uVar13 = *(longlong *)(unaff_RDI + 0xae) - lVar12;
    if (uVar13 < *(ulonglong *)(unaff_RDI + 0xaa)) {
      *(undefined1 *)(unaff_RDI + 0xb2) = 1;
      goto LAB_00efab3f;
    }
    if (uVar13 < *(ulonglong *)(unaff_RDI + 0xac)) {
      *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
    }
    *(ulonglong *)(unaff_RDI + 0xae) = uVar13;
  }
  *(ulonglong *)(unaff_RDI + 0x378) = uVar13;
  if (unaff_RDI[0x50] == 1) {
    if (uVar14 < 3) {
      lVar17 = *(longlong *)(unaff_RDI + 0xa8);
      *(longlong *)(unaff_RDI + 0xac) = lVar17;
      *(ulonglong *)(unaff_RDI + 0xb0) = *(ulonglong *)(unaff_RDI + 0xa6) & 0xffffffffffffffc0;
      uVar16 = (ulonglong)(-(int)lVar17 & 0x3f);
      uVar13 = lVar17 + uVar16;
      if (uVar13 <= *(ulonglong *)(unaff_RDI + 0xa6)) {
        *(ulonglong *)(unaff_RDI + 0xa8) = uVar13;
        *(ulonglong *)(unaff_RDI + 0xaa) = uVar13;
        if (uVar16 != 0) {
          *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
        }
        unaff_RDI[0xb4] = 3;
        goto LAB_00efabe1;
      }
LAB_00efabfc:
      uVar13 = 0;
    }
    else {
LAB_00efabe1:
      uVar13 = *(longlong *)(unaff_RDI + 0xae) -
               (1L << ((char)unaff_RDI[0x51] - (char)unaff_RDI[0x52] & 0x3fU));
      if (uVar13 < *(ulonglong *)(unaff_RDI + 0xaa)) {
        *(undefined1 *)(unaff_RDI + 0xb2) = 1;
        goto LAB_00efabfc;
      }
      if (uVar13 < *(ulonglong *)(unaff_RDI + 0xac)) {
        *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
      }
      *(ulonglong *)(unaff_RDI + 0xae) = uVar13;
    }
    *(ulonglong *)(unaff_RDI + 0x10a) = uVar13;
    ___bzero();
  }
  if ((*unaff_RDI == 1) && (unaff_RDI[0x50] != 1)) {
    unaff_RDI[0x314] = 0;
    unaff_RDI[0x315] = 0;
    unaff_RDI[0x316] = 0;
    unaff_RDI[0x317] = 0;
    unaff_RDI[0x310] = 0;
    unaff_RDI[0x311] = 0;
    unaff_RDI[0x312] = 0;
    unaff_RDI[0x313] = 0;
    unaff_RDI[0x318] = 0;
    unaff_RDI[0x319] = 0;
  }
  *(ulonglong *)(unaff_RDI + 0xf6) = uVar6;
  if ((uint)unaff_RDI[0xb4] < 3) {
    if (unaff_RDI[0xb4] != 0) {
LAB_00efac71:
      unaff_RDI[0xb4] = 3;
      goto LAB_00efac7c;
    }
    lVar17 = *(longlong *)(unaff_RDI + 0xa8);
    *(longlong *)(unaff_RDI + 0xac) = lVar17;
    *(ulonglong *)(unaff_RDI + 0xb0) = *(ulonglong *)(unaff_RDI + 0xa6) & 0xffffffffffffffc0;
    uVar16 = (ulonglong)(-(int)lVar17 & 0x3f);
    uVar13 = lVar17 + uVar16;
    if (uVar13 <= *(ulonglong *)(unaff_RDI + 0xa6)) {
      *(ulonglong *)(unaff_RDI + 0xa8) = uVar13;
      *(ulonglong *)(unaff_RDI + 0xaa) = uVar13;
      if (uVar16 != 0) {
        *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
      }
      goto LAB_00efac71;
    }
    unaff_RDI[0xf0] = 0;
    unaff_RDI[0xf1] = 0;
    lVar17 = *(longlong *)(unaff_RDI + 0xa8);
    *(longlong *)(unaff_RDI + 0xac) = lVar17;
    *(ulonglong *)(unaff_RDI + 0xb0) = *(ulonglong *)(unaff_RDI + 0xa6) & 0xffffffffffffffc0;
    uVar16 = (ulonglong)(-(int)lVar17 & 0x3f);
    uVar13 = lVar17 + uVar16;
    if (uVar13 <= *(ulonglong *)(unaff_RDI + 0xa6)) {
      *(ulonglong *)(unaff_RDI + 0xa8) = uVar13;
      *(ulonglong *)(unaff_RDI + 0xaa) = uVar13;
      if (uVar16 != 0) {
        *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
      }
      unaff_RDI[0xb4] = 3;
      goto LAB_00efacbe;
    }
    unaff_RDI[0xf2] = 0;
    unaff_RDI[0xf3] = 0;
    lVar17 = *(longlong *)(unaff_RDI + 0xa8);
    *(longlong *)(unaff_RDI + 0xac) = lVar17;
    *(ulonglong *)(unaff_RDI + 0xb0) = *(ulonglong *)(unaff_RDI + 0xa6) & 0xffffffffffffffc0;
    uVar16 = (ulonglong)(-(int)lVar17 & 0x3f);
    uVar13 = lVar17 + uVar16;
    if (uVar13 <= *(ulonglong *)(unaff_RDI + 0xa6)) {
      *(ulonglong *)(unaff_RDI + 0xa8) = uVar13;
      *(ulonglong *)(unaff_RDI + 0xaa) = uVar13;
      if (uVar16 != 0) {
        *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
      }
      unaff_RDI[0xb4] = 3;
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
      uVar13 = *(longlong *)(unaff_RDI + 0xae) - uVar6;
      if (uVar13 < *(ulonglong *)(unaff_RDI + 0xaa)) {
        *(undefined1 *)(unaff_RDI + 0xb2) = 1;
        goto LAB_00efac9c;
      }
      if (uVar13 < *(ulonglong *)(unaff_RDI + 0xac)) {
        *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
      }
      *(ulonglong *)(unaff_RDI + 0xae) = uVar13;
    }
    *(ulonglong *)(unaff_RDI + 0xf0) = uVar13;
LAB_00efacbe:
    if (uVar15 < uVar10) {
LAB_00efacde:
      uVar13 = 0;
    }
    else {
      uVar13 = *(longlong *)(unaff_RDI + 0xae) - uVar6;
      if (uVar13 < *(ulonglong *)(unaff_RDI + 0xaa)) {
        *(undefined1 *)(unaff_RDI + 0xb2) = 1;
        goto LAB_00efacde;
      }
      if (uVar13 < *(ulonglong *)(unaff_RDI + 0xac)) {
        *(ulonglong *)(unaff_RDI + 0xac) = uVar13;
      }
      *(ulonglong *)(unaff_RDI + 0xae) = uVar13;
    }
    *(ulonglong *)(unaff_RDI + 0xf2) = uVar13;
LAB_00efad00:
    if (uVar10 <= uVar15) {
      uVar6 = *(longlong *)(unaff_RDI + 0xae) - uVar6;
      if (*(ulonglong *)(unaff_RDI + 0xaa) <= uVar6) {
        if (uVar6 < *(ulonglong *)(unaff_RDI + 0xac)) {
          *(ulonglong *)(unaff_RDI + 0xac) = uVar6;
        }
        *(ulonglong *)(unaff_RDI + 0xae) = uVar6;
        goto LAB_00efad3b;
      }
      *(undefined1 *)(unaff_RDI + 0xb2) = 1;
    }
  }
  uVar6 = 0;
LAB_00efad3b:
  *(ulonglong *)(unaff_RDI + 0xf4) = uVar6;
  unaff_RDI[0xe7] = 1;
  return 0;
}


