// Function: FUN_00ea47f0
// Address: 00ea47f0
// Size: 16351 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"
//   "\n    [%d: huff+mtf "
//   "rt+rld"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00ea47f0(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  ushort uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  byte bVar25;
  int iVar26;
  undefined1 *puVar27;
  longlong lVar28;
  char cVar29;
  byte bVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int *piVar34;
  ulonglong uVar35;
  undefined *puVar36;
  ulonglong uVar37;
  longlong lVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  undefined1 *puVar42;
  uint uVar43;
  undefined8 *unaff_RDI;
  longlong lVar44;
  ulonglong uVar45;
  undefined1 auVar46 [8];
  undefined1 *puVar47;
  char cVar48;
  FILE *pFVar49;
  undefined1 auVar50 [8];
  undefined1 auVar51 [8];
  ulonglong uVar52;
  int iVar53;
  undefined8 *puVar54;
  bool bVar55;
  uint uVar56;
  undefined8 extraout_XMM0_Qa;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  longlong local_d8;
  uint local_cc;
  undefined *local_c8;
  int local_b4;
  uint local_a4;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [4];
  int local_6c;
  undefined1 local_68 [4];
  undefined1 auStack_64 [4];
  undefined1 local_60;
  undefined1 auStack_5f [8];
  undefined1 auStack_57 [7];
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  iVar26 = *(int *)(unaff_RDI + 1);
  if (iVar26 == 10) {
    *(undefined1 (*) [16])(unaff_RDI + 0x1f50) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)unaff_RDI + 0xfa74) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)unaff_RDI + 0xfa64) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)unaff_RDI + 0xfa54) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)unaff_RDI + 0xfa44) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)unaff_RDI + 0xfa34) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)unaff_RDI + 0xfa24) = (undefined1  [16])0x0;
    local_78 = (undefined1  [8])0x0;
    local_d8 = 0;
    local_c8 = (undefined *)0x0;
    local_a4 = 0;
    local_90 = (undefined1  [8])0x0;
    local_cc = 0;
    local_38 = 0;
    local_48 = (ulonglong)local_48._4_4_ << 0x20;
    pFVar49 = (FILE *)0x0;
    uVar20 = 0;
    iVar32 = 0;
    iVar33 = 0;
    _local_68 = (ulonglong)(uint)auStack_64 << 0x20;
    local_b4 = 0;
    auVar50 = (undefined1  [8])0x0;
    iVar53 = 0;
    uStack_40 = 0;
    local_80 = (undefined1  [8])((ulonglong)(uint)local_80._4_4_ << 0x20);
    uVar22 = 0;
    uVar40 = 0;
    uVar43 = 0;
    uVar56 = 0;
    local_70 = (undefined1  [4])0x0;
    auVar51 = (undefined1  [8])0x0;
  }
  else {
    auVar51 = (undefined1  [8])(ulonglong)*(uint *)((longlong)unaff_RDI + 0xfa24);
    local_70 = (undefined1  [4])*(uint *)(unaff_RDI + 0x1f45);
    uVar56 = *(uint *)((longlong)unaff_RDI + 0xfa2c);
    uVar43 = *(uint *)(unaff_RDI + 0x1f46);
    uVar40 = *(uint *)((longlong)unaff_RDI + 0xfa34);
    uVar22 = *(uint *)(unaff_RDI + 0x1f47);
    local_80._0_4_ = *(undefined4 *)((longlong)unaff_RDI + 0xfa3c);
    uStack_40 = (ulonglong)*(uint *)(unaff_RDI + 0x1f48);
    iVar53 = *(int *)((longlong)unaff_RDI + 0xfa44);
    auVar50 = (undefined1  [8])(ulonglong)*(uint *)(unaff_RDI + 0x1f49);
    local_b4 = *(int *)((longlong)unaff_RDI + 0xfa4c);
    _local_68 = CONCAT44(auStack_64,*(undefined4 *)(unaff_RDI + 0x1f4a));
    iVar33 = *(int *)((longlong)unaff_RDI + 0xfa54);
    iVar32 = *(int *)(unaff_RDI + 0x1f4b);
    uVar20 = *(uint *)((longlong)unaff_RDI + 0xfa5c);
    pFVar49 = (FILE *)(ulonglong)*(uint *)(unaff_RDI + 0x1f4c);
    local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)((longlong)unaff_RDI + 0xfa64));
    local_38 = (ulonglong)*(uint *)(unaff_RDI + 0x1f4d);
    local_cc = *(uint *)((longlong)unaff_RDI + 0xfa6c);
    local_90 = (undefined1  [8])(ulonglong)*(uint *)(unaff_RDI + 0x1f4e);
    local_a4 = *(uint *)((longlong)unaff_RDI + 0xfa74);
    local_c8 = (undefined *)unaff_RDI[0x1f4f];
    local_d8 = unaff_RDI[0x1f50];
    local_78 = (undefined1  [8])unaff_RDI[0x1f51];
  }
  if (0x28 < iVar26 - 10U) {
    local_48 = CONCAT44(uVar43,(uint)local_48);
    local_98 = auVar50;
    local_6c = iVar53;
    _local_60 = uVar22;
    FUN_00e9e160();
    FUN_00e9e160();
    uVar24 = 0;
    auVar50 = local_98;
    uVar43 = local_48._4_4_;
    uVar22 = _local_60;
    iVar53 = local_6c;
    auVar46 = local_80;
    goto LAB_00ea7afb;
  }
  puVar54 = (undefined8 *)*unaff_RDI;
  uVar19 = uVar40;
  uVar41 = uVar56;
  auVar46 = local_80;
  switch(iVar26) {
  case 10:
    *(undefined4 *)(unaff_RDI + 1) = 10;
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    if (iVar26 < 8) {
      iVar39 = *(int *)(puVar54 + 1);
      iVar31 = iVar26;
      do {
        iVar39 = iVar39 + -1;
        if (iVar39 == -1) goto LAB_00ea68fd;
        pbVar5 = (byte *)*puVar54;
        uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
        *(uint *)(unaff_RDI + 4) = uVar19;
        iVar26 = iVar31 + 8;
        *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
        *puVar54 = pbVar5 + 1;
        *(int *)(puVar54 + 1) = iVar39;
        piVar34 = (int *)((longlong)puVar54 + 0xc);
        *piVar34 = *piVar34 + 1;
        if (*piVar34 == 0) {
          *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
        }
        bVar55 = iVar31 < 0;
        iVar31 = iVar26;
      } while (bVar55);
    }
    else {
      uVar19 = *(uint *)(unaff_RDI + 4);
    }
    iVar26 = iVar26 + -8;
    *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
    uVar24 = 0xfffffffb;
    if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) != 'B') goto LAB_00ea7afb;
    break;
  case 0xb:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    break;
  case 0xc:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    goto LAB_00ea4ac9;
  case 0xd:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    goto LAB_00ea4afe;
  case 0xe:
    goto switchD_00ea4a00_caseD_e;
  case 0xf:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    goto LAB_00ea5483;
  case 0x10:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    goto LAB_00ea54b3;
  case 0x11:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    goto LAB_00ea54e3;
  case 0x12:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    goto LAB_00ea5513;
  case 0x13:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    goto LAB_00ea5543;
  case 0x14:
    goto switchD_00ea4a00_caseD_14;
  case 0x15:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    *(undefined4 *)(unaff_RDI + 1) = 0x15;
    goto joined_r0x00ea4c23;
  case 0x16:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    *(undefined4 *)(unaff_RDI + 1) = 0x16;
    goto joined_r0x00ea4c96;
  case 0x17:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    *(undefined4 *)(unaff_RDI + 1) = 0x17;
    goto joined_r0x00ea4d06;
  case 0x18:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    goto LAB_00ea56b4;
  case 0x19:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    *(undefined4 *)(unaff_RDI + 1) = 0x19;
    local_98 = auVar50;
    goto joined_r0x00ea4d7f;
  case 0x1a:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    *(undefined4 *)(unaff_RDI + 1) = 0x1a;
    local_98 = auVar50;
    goto joined_r0x00ea4df6;
  case 0x1b:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    *(undefined4 *)(unaff_RDI + 1) = 0x1b;
    local_98 = auVar50;
    goto joined_r0x00ea4e66;
  case 0x1c:
    goto switchD_00ea4a00_caseD_1c;
  case 0x1d:
    goto switchD_00ea4a00_caseD_1d;
  case 0x1e:
    goto switchD_00ea4a00_caseD_1e;
  case 0x1f:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    local_98 = auVar50;
    goto LAB_00ea4ecb;
  case 0x20:
    goto switchD_00ea4a00_caseD_20;
  case 0x21:
    goto switchD_00ea4a00_caseD_21;
  case 0x22:
    goto switchD_00ea4a00_caseD_22;
  case 0x23:
    uVar41 = *(uint *)((longlong)unaff_RDI + 0x24);
    goto LAB_00ea5e0c;
  case 0x24:
    goto switchD_00ea4a00_caseD_24;
  case 0x25:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    local_88 = auVar51;
    local_48._4_4_ = uVar43;
    goto LAB_00ea6654;
  case 0x26:
    goto switchD_00ea4a00_caseD_26;
  case 0x27:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    *(undefined4 *)(unaff_RDI + 1) = 0x27;
    if (0 < iVar26) goto LAB_00ea87df;
    goto LAB_00ea4f38;
  case 0x28:
    goto switchD_00ea4a00_caseD_28;
  case 0x29:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    *(undefined4 *)(unaff_RDI + 1) = 0x29;
    local_98 = auVar50;
    if (0 < iVar26) goto LAB_00ea8740;
    goto LAB_00ea4fac;
  case 0x2a:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    goto LAB_00ea578f;
  case 0x2b:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    goto LAB_00ea57bf;
  case 0x2c:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    goto LAB_00ea57ef;
  case 0x2d:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    goto LAB_00ea581f;
  case 0x2e:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    goto LAB_00ea584f;
  case 0x2f:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    *(undefined4 *)(unaff_RDI + 1) = 0x2f;
    local_98 = auVar50;
    goto joined_r0x00ea5044;
  case 0x30:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    *(undefined4 *)(unaff_RDI + 1) = 0x30;
    local_98 = auVar50;
    goto joined_r0x00ea512a;
  case 0x31:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    *(undefined4 *)(unaff_RDI + 1) = 0x31;
    local_98 = auVar50;
    goto joined_r0x00ea5196;
  case 0x32:
    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
    *(undefined4 *)(unaff_RDI + 1) = 0x32;
    local_98 = auVar50;
    goto joined_r0x00ea5206;
  }
  *(undefined4 *)(unaff_RDI + 1) = 0xb;
  if (iVar26 < 8) {
    iVar39 = *(int *)(puVar54 + 1);
    iVar31 = iVar26;
    do {
      iVar39 = iVar39 + -1;
      if (iVar39 == -1) goto LAB_00ea68fd;
      pbVar5 = (byte *)*puVar54;
      uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
      *(uint *)(unaff_RDI + 4) = uVar19;
      iVar26 = iVar31 + 8;
      *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
      *puVar54 = pbVar5 + 1;
      *(int *)(puVar54 + 1) = iVar39;
      piVar34 = (int *)((longlong)puVar54 + 0xc);
      *piVar34 = *piVar34 + 1;
      if (*piVar34 == 0) {
        *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
      }
      bVar55 = iVar31 < 0;
      iVar31 = iVar26;
    } while (bVar55);
  }
  else {
    uVar19 = *(uint *)(unaff_RDI + 4);
  }
  iVar26 = iVar26 + -8;
  *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
  uVar24 = 0xfffffffb;
  if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == 'Z') {
LAB_00ea4ac9:
    *(undefined4 *)(unaff_RDI + 1) = 0xc;
    if (iVar26 < 8) {
      iVar39 = *(int *)(puVar54 + 1);
      iVar31 = iVar26;
      do {
        iVar39 = iVar39 + -1;
        if (iVar39 == -1) goto LAB_00ea68fd;
        pbVar5 = (byte *)*puVar54;
        uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
        *(uint *)(unaff_RDI + 4) = uVar19;
        iVar26 = iVar31 + 8;
        *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
        *puVar54 = pbVar5 + 1;
        *(int *)(puVar54 + 1) = iVar39;
        piVar34 = (int *)((longlong)puVar54 + 0xc);
        *piVar34 = *piVar34 + 1;
        if (*piVar34 == 0) {
          *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
        }
        bVar55 = iVar31 < 0;
        iVar31 = iVar26;
      } while (bVar55);
    }
    else {
      uVar19 = *(uint *)(unaff_RDI + 4);
    }
    iVar26 = iVar26 + -8;
    *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
    uVar24 = 0xfffffffb;
    if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == 'h') {
LAB_00ea4afe:
      *(undefined4 *)(unaff_RDI + 1) = 0xd;
      if (iVar26 < 8) {
        iVar39 = *(int *)(puVar54 + 1);
        iVar31 = iVar26;
        do {
          iVar39 = iVar39 + -1;
          if (iVar39 == -1) goto LAB_00ea68fd;
          pbVar5 = (byte *)*puVar54;
          uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
          *(uint *)(unaff_RDI + 4) = uVar19;
          iVar26 = iVar31 + 8;
          *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
          *puVar54 = pbVar5 + 1;
          *(int *)(puVar54 + 1) = iVar39;
          piVar34 = (int *)((longlong)puVar54 + 0xc);
          *piVar34 = *piVar34 + 1;
          if (*piVar34 == 0) {
            *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
          }
          bVar55 = iVar31 < 0;
          iVar31 = iVar26;
        } while (bVar55);
      }
      else {
        uVar19 = *(uint *)(unaff_RDI + 4);
      }
      uVar41 = uVar19 >> ((byte)(iVar26 + -8) & 0x1f) & 0xff;
      *(int *)((longlong)unaff_RDI + 0x24) = iVar26 + -8;
      *(uint *)(unaff_RDI + 5) = uVar41;
      uVar19 = uVar41 - 0x31;
      uVar24 = 0xfffffffb;
      if (uVar19 < 9) {
        local_48 = CONCAT44(uVar43,(uint)local_48);
        *(uint *)(unaff_RDI + 5) = uVar41 - 0x30;
        auStack_5f._3_4_ = (uint)pFVar49;
        if (*(char *)((longlong)unaff_RDI + 0x2c) == '\0') {
          local_98 = auVar50;
          local_88 = auVar51;
          _local_60 = uVar22;
          lVar28 = (*(code *)puVar54[7])(uVar19,1);
          unaff_RDI[0x18a] = lVar28;
          pFVar49 = (FILE *)(ulonglong)(uint)auStack_5f._3_4_;
          auVar50 = local_98;
          auVar51 = local_88;
          uVar43 = local_48._4_4_;
          uVar22 = _local_60;
          if (lVar28 == 0) {
            uVar24 = 0xfffffffd;
            auVar46 = local_80;
          }
          else {
switchD_00ea4a00_caseD_e:
            *(undefined4 *)(unaff_RDI + 1) = 0xe;
            iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
            if (iVar26 < 8) {
              puVar54 = (undefined8 *)*unaff_RDI;
              iVar39 = *(int *)(puVar54 + 1);
              iVar31 = iVar26;
              do {
                iVar39 = iVar39 + -1;
                if (iVar39 == -1) goto LAB_00ea68fd;
                pbVar5 = (byte *)*puVar54;
                uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                *(uint *)(unaff_RDI + 4) = uVar19;
                iVar26 = iVar31 + 8;
                *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                *puVar54 = pbVar5 + 1;
                *(int *)(puVar54 + 1) = iVar39;
                piVar34 = (int *)((longlong)puVar54 + 0xc);
                *piVar34 = *piVar34 + 1;
                if (*piVar34 == 0) {
                  *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                }
                bVar55 = iVar31 < 0;
                iVar31 = iVar26;
              } while (bVar55);
            }
            else {
              uVar19 = *(uint *)(unaff_RDI + 4);
            }
            iVar26 = iVar26 + -8;
            *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
            cVar29 = (char)(uVar19 >> ((byte)iVar26 & 0x1f));
            if (cVar29 == '\x17') {
LAB_00ea578f:
              *(undefined4 *)(unaff_RDI + 1) = 0x2a;
              if (iVar26 < 8) {
                puVar54 = (undefined8 *)*unaff_RDI;
                iVar39 = *(int *)(puVar54 + 1);
                iVar31 = iVar26;
                do {
                  iVar39 = iVar39 + -1;
                  if (iVar39 == -1) goto LAB_00ea68fd;
                  pbVar5 = (byte *)*puVar54;
                  uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                  *(uint *)(unaff_RDI + 4) = uVar19;
                  iVar26 = iVar31 + 8;
                  *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                  *puVar54 = pbVar5 + 1;
                  *(int *)(puVar54 + 1) = iVar39;
                  piVar34 = (int *)((longlong)puVar54 + 0xc);
                  *piVar34 = *piVar34 + 1;
                  if (*piVar34 == 0) {
                    *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                  }
                  bVar55 = iVar31 < 0;
                  iVar31 = iVar26;
                } while (bVar55);
              }
              else {
                uVar19 = *(uint *)(unaff_RDI + 4);
              }
              iVar26 = iVar26 + -8;
              *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
              uVar24 = 0xfffffffc;
              auVar46 = local_80;
              if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == 'r') {
LAB_00ea57bf:
                *(undefined4 *)(unaff_RDI + 1) = 0x2b;
                if (iVar26 < 8) {
                  puVar54 = (undefined8 *)*unaff_RDI;
                  iVar39 = *(int *)(puVar54 + 1);
                  iVar31 = iVar26;
                  do {
                    iVar39 = iVar39 + -1;
                    if (iVar39 == -1) goto LAB_00ea68fd;
                    pbVar5 = (byte *)*puVar54;
                    uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                    *(uint *)(unaff_RDI + 4) = uVar19;
                    iVar26 = iVar31 + 8;
                    *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                    *puVar54 = pbVar5 + 1;
                    *(int *)(puVar54 + 1) = iVar39;
                    piVar34 = (int *)((longlong)puVar54 + 0xc);
                    *piVar34 = *piVar34 + 1;
                    if (*piVar34 == 0) {
                      *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                    }
                    bVar55 = iVar31 < 0;
                    iVar31 = iVar26;
                  } while (bVar55);
                }
                else {
                  uVar19 = *(uint *)(unaff_RDI + 4);
                }
                iVar26 = iVar26 + -8;
                *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                uVar24 = 0xfffffffc;
                auVar46 = local_80;
                if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == 'E') {
LAB_00ea57ef:
                  *(undefined4 *)(unaff_RDI + 1) = 0x2c;
                  if (iVar26 < 8) {
                    puVar54 = (undefined8 *)*unaff_RDI;
                    iVar39 = *(int *)(puVar54 + 1);
                    iVar31 = iVar26;
                    do {
                      iVar39 = iVar39 + -1;
                      if (iVar39 == -1) goto LAB_00ea68fd;
                      pbVar5 = (byte *)*puVar54;
                      uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                      *(uint *)(unaff_RDI + 4) = uVar19;
                      iVar26 = iVar31 + 8;
                      *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                      *puVar54 = pbVar5 + 1;
                      *(int *)(puVar54 + 1) = iVar39;
                      piVar34 = (int *)((longlong)puVar54 + 0xc);
                      *piVar34 = *piVar34 + 1;
                      if (*piVar34 == 0) {
                        *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                      }
                      bVar55 = iVar31 < 0;
                      iVar31 = iVar26;
                    } while (bVar55);
                  }
                  else {
                    uVar19 = *(uint *)(unaff_RDI + 4);
                  }
                  iVar26 = iVar26 + -8;
                  *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                  uVar24 = 0xfffffffc;
                  auVar46 = local_80;
                  if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == '8') {
LAB_00ea581f:
                    *(undefined4 *)(unaff_RDI + 1) = 0x2d;
                    if (iVar26 < 8) {
                      puVar54 = (undefined8 *)*unaff_RDI;
                      iVar39 = *(int *)(puVar54 + 1);
                      iVar31 = iVar26;
                      do {
                        iVar39 = iVar39 + -1;
                        if (iVar39 == -1) goto LAB_00ea68fd;
                        pbVar5 = (byte *)*puVar54;
                        uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                        *(uint *)(unaff_RDI + 4) = uVar19;
                        iVar26 = iVar31 + 8;
                        *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                        *puVar54 = pbVar5 + 1;
                        *(int *)(puVar54 + 1) = iVar39;
                        piVar34 = (int *)((longlong)puVar54 + 0xc);
                        *piVar34 = *piVar34 + 1;
                        if (*piVar34 == 0) {
                          *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                        }
                        bVar55 = iVar31 < 0;
                        iVar31 = iVar26;
                      } while (bVar55);
                    }
                    else {
                      uVar19 = *(uint *)(unaff_RDI + 4);
                    }
                    iVar26 = iVar26 + -8;
                    *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                    uVar24 = 0xfffffffc;
                    auVar46 = local_80;
                    if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == 'P') {
LAB_00ea584f:
                      *(undefined4 *)(unaff_RDI + 1) = 0x2e;
                      if (iVar26 < 8) {
                        puVar54 = (undefined8 *)*unaff_RDI;
                        iVar39 = *(int *)(puVar54 + 1);
                        iVar31 = iVar26;
                        do {
                          iVar39 = iVar39 + -1;
                          if (iVar39 == -1) goto LAB_00ea68fd;
                          pbVar5 = (byte *)*puVar54;
                          uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                          *(uint *)(unaff_RDI + 4) = uVar19;
                          iVar26 = iVar31 + 8;
                          *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                          *puVar54 = pbVar5 + 1;
                          *(int *)(puVar54 + 1) = iVar39;
                          piVar34 = (int *)((longlong)puVar54 + 0xc);
                          *piVar34 = *piVar34 + 1;
                          if (*piVar34 == 0) {
                            *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                          }
                          bVar55 = iVar31 < 0;
                          iVar31 = iVar26;
                        } while (bVar55);
                      }
                      else {
                        uVar19 = *(uint *)(unaff_RDI + 4);
                      }
                      iVar26 = iVar26 + -8;
                      *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                      uVar24 = 0xfffffffc;
                      auVar46 = local_80;
                      if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == -0x70) {
                        *(undefined4 *)((longlong)unaff_RDI + 0xc6c) = 0;
                        *(undefined4 *)(unaff_RDI + 1) = 0x2f;
                        local_98 = auVar50;
joined_r0x00ea5044:
                        if (iVar26 < 8) {
                          puVar54 = (undefined8 *)*unaff_RDI;
                          iVar39 = *(int *)(puVar54 + 1);
                          iVar31 = iVar26;
                          do {
                            iVar39 = iVar39 + -1;
                            auVar50 = local_98;
                            if (iVar39 == -1) goto LAB_00ea68fd;
                            pbVar5 = (byte *)*puVar54;
                            uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                            *(uint *)(unaff_RDI + 4) = uVar19;
                            iVar26 = iVar31 + 8;
                            *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                            *puVar54 = pbVar5 + 1;
                            *(int *)(puVar54 + 1) = iVar39;
                            piVar34 = (int *)((longlong)puVar54 + 0xc);
                            *piVar34 = *piVar34 + 1;
                            if (*piVar34 == 0) {
                              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                            }
                            bVar55 = iVar31 < 0;
                            iVar31 = iVar26;
                          } while (bVar55);
                        }
                        else {
                          uVar19 = *(uint *)(unaff_RDI + 4);
                        }
                        iVar26 = iVar26 + -8;
                        *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                        *(uint *)((longlong)unaff_RDI + 0xc6c) =
                             uVar19 >> ((byte)iVar26 & 0x1f) & 0xff |
                             *(int *)((longlong)unaff_RDI + 0xc6c) << 8;
                        *(undefined4 *)(unaff_RDI + 1) = 0x30;
joined_r0x00ea512a:
                        if (iVar26 < 8) {
                          puVar54 = (undefined8 *)*unaff_RDI;
                          iVar39 = *(int *)(puVar54 + 1);
                          iVar31 = iVar26;
                          do {
                            iVar39 = iVar39 + -1;
                            auVar50 = local_98;
                            if (iVar39 == -1) goto LAB_00ea68fd;
                            pbVar5 = (byte *)*puVar54;
                            uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                            *(uint *)(unaff_RDI + 4) = uVar19;
                            iVar26 = iVar31 + 8;
                            *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                            *puVar54 = pbVar5 + 1;
                            *(int *)(puVar54 + 1) = iVar39;
                            piVar34 = (int *)((longlong)puVar54 + 0xc);
                            *piVar34 = *piVar34 + 1;
                            if (*piVar34 == 0) {
                              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                            }
                            bVar55 = iVar31 < 0;
                            iVar31 = iVar26;
                          } while (bVar55);
                        }
                        else {
                          uVar19 = *(uint *)(unaff_RDI + 4);
                        }
                        iVar26 = iVar26 + -8;
                        *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                        *(uint *)((longlong)unaff_RDI + 0xc6c) =
                             uVar19 >> ((byte)iVar26 & 0x1f) & 0xff |
                             *(int *)((longlong)unaff_RDI + 0xc6c) << 8;
                        *(undefined4 *)(unaff_RDI + 1) = 0x31;
joined_r0x00ea5196:
                        if (iVar26 < 8) {
                          puVar54 = (undefined8 *)*unaff_RDI;
                          iVar39 = *(int *)(puVar54 + 1);
                          iVar31 = iVar26;
                          do {
                            iVar39 = iVar39 + -1;
                            auVar50 = local_98;
                            if (iVar39 == -1) goto LAB_00ea68fd;
                            pbVar5 = (byte *)*puVar54;
                            uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                            *(uint *)(unaff_RDI + 4) = uVar19;
                            iVar26 = iVar31 + 8;
                            *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                            *puVar54 = pbVar5 + 1;
                            *(int *)(puVar54 + 1) = iVar39;
                            piVar34 = (int *)((longlong)puVar54 + 0xc);
                            *piVar34 = *piVar34 + 1;
                            if (*piVar34 == 0) {
                              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                            }
                            bVar55 = iVar31 < 0;
                            iVar31 = iVar26;
                          } while (bVar55);
                        }
                        else {
                          uVar19 = *(uint *)(unaff_RDI + 4);
                        }
                        iVar26 = iVar26 + -8;
                        *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                        *(uint *)((longlong)unaff_RDI + 0xc6c) =
                             uVar19 >> ((byte)iVar26 & 0x1f) & 0xff |
                             *(int *)((longlong)unaff_RDI + 0xc6c) << 8;
                        *(undefined4 *)(unaff_RDI + 1) = 0x32;
joined_r0x00ea5206:
                        uVar57 = SUB84(auVar51,0);
                        if (iVar26 < 8) {
                          puVar54 = (undefined8 *)*unaff_RDI;
                          iVar39 = *(int *)(puVar54 + 1);
                          iVar31 = iVar26;
                          do {
                            iVar39 = iVar39 + -1;
                            auVar50 = local_98;
                            if (iVar39 == -1) goto LAB_00ea68fd;
                            pbVar5 = (byte *)*puVar54;
                            uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                            *(uint *)(unaff_RDI + 4) = uVar19;
                            iVar26 = iVar31 + 8;
                            *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                            *puVar54 = pbVar5 + 1;
                            *(int *)(puVar54 + 1) = iVar39;
                            piVar34 = (int *)((longlong)puVar54 + 0xc);
                            *piVar34 = *piVar34 + 1;
                            if (*piVar34 == 0) {
                              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                            }
                            bVar55 = iVar31 < 0;
                            iVar31 = iVar26;
                          } while (bVar55);
                        }
                        else {
                          uVar19 = *(uint *)(unaff_RDI + 4);
                        }
                        *(int *)((longlong)unaff_RDI + 0x24) = iVar26 + -8;
                        *(uint *)((longlong)unaff_RDI + 0xc6c) =
                             uVar19 >> ((byte)(iVar26 + -8) & 0x1f) & 0xff |
                             *(int *)((longlong)unaff_RDI + 0xc6c) << 8;
                        *(undefined4 *)(unaff_RDI + 1) = 1;
                        uVar24 = 4;
                        goto LAB_00ea68ff;
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar24 = 0xfffffffc;
              auVar46 = local_80;
              if (cVar29 == '1') {
LAB_00ea5483:
                *(undefined4 *)(unaff_RDI + 1) = 0xf;
                if (iVar26 < 8) {
                  puVar54 = (undefined8 *)*unaff_RDI;
                  iVar39 = *(int *)(puVar54 + 1);
                  iVar31 = iVar26;
                  do {
                    iVar39 = iVar39 + -1;
                    if (iVar39 == -1) goto LAB_00ea68fd;
                    pbVar5 = (byte *)*puVar54;
                    uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                    *(uint *)(unaff_RDI + 4) = uVar19;
                    iVar26 = iVar31 + 8;
                    *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                    *puVar54 = pbVar5 + 1;
                    *(int *)(puVar54 + 1) = iVar39;
                    piVar34 = (int *)((longlong)puVar54 + 0xc);
                    *piVar34 = *piVar34 + 1;
                    if (*piVar34 == 0) {
                      *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                    }
                    bVar55 = iVar31 < 0;
                    iVar31 = iVar26;
                  } while (bVar55);
                }
                else {
                  uVar19 = *(uint *)(unaff_RDI + 4);
                }
                iVar26 = iVar26 + -8;
                *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                uVar24 = 0xfffffffc;
                auVar46 = local_80;
                if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == 'A') {
LAB_00ea54b3:
                  *(undefined4 *)(unaff_RDI + 1) = 0x10;
                  if (iVar26 < 8) {
                    puVar54 = (undefined8 *)*unaff_RDI;
                    iVar39 = *(int *)(puVar54 + 1);
                    iVar31 = iVar26;
                    do {
                      iVar39 = iVar39 + -1;
                      if (iVar39 == -1) goto LAB_00ea68fd;
                      pbVar5 = (byte *)*puVar54;
                      uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                      *(uint *)(unaff_RDI + 4) = uVar19;
                      iVar26 = iVar31 + 8;
                      *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                      *puVar54 = pbVar5 + 1;
                      *(int *)(puVar54 + 1) = iVar39;
                      piVar34 = (int *)((longlong)puVar54 + 0xc);
                      *piVar34 = *piVar34 + 1;
                      if (*piVar34 == 0) {
                        *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                      }
                      bVar55 = iVar31 < 0;
                      iVar31 = iVar26;
                    } while (bVar55);
                  }
                  else {
                    uVar19 = *(uint *)(unaff_RDI + 4);
                  }
                  iVar26 = iVar26 + -8;
                  *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                  uVar24 = 0xfffffffc;
                  auVar46 = local_80;
                  if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == 'Y') {
LAB_00ea54e3:
                    *(undefined4 *)(unaff_RDI + 1) = 0x11;
                    if (iVar26 < 8) {
                      puVar54 = (undefined8 *)*unaff_RDI;
                      iVar39 = *(int *)(puVar54 + 1);
                      iVar31 = iVar26;
                      do {
                        iVar39 = iVar39 + -1;
                        if (iVar39 == -1) goto LAB_00ea68fd;
                        pbVar5 = (byte *)*puVar54;
                        uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                        *(uint *)(unaff_RDI + 4) = uVar19;
                        iVar26 = iVar31 + 8;
                        *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                        *puVar54 = pbVar5 + 1;
                        *(int *)(puVar54 + 1) = iVar39;
                        piVar34 = (int *)((longlong)puVar54 + 0xc);
                        *piVar34 = *piVar34 + 1;
                        if (*piVar34 == 0) {
                          *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                        }
                        bVar55 = iVar31 < 0;
                        iVar31 = iVar26;
                      } while (bVar55);
                    }
                    else {
                      uVar19 = *(uint *)(unaff_RDI + 4);
                    }
                    iVar26 = iVar26 + -8;
                    *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                    uVar24 = 0xfffffffc;
                    auVar46 = local_80;
                    if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == '&') {
LAB_00ea5513:
                      *(undefined4 *)(unaff_RDI + 1) = 0x12;
                      if (iVar26 < 8) {
                        puVar54 = (undefined8 *)*unaff_RDI;
                        iVar39 = *(int *)(puVar54 + 1);
                        iVar31 = iVar26;
                        do {
                          iVar39 = iVar39 + -1;
                          if (iVar39 == -1) goto LAB_00ea68fd;
                          pbVar5 = (byte *)*puVar54;
                          uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                          *(uint *)(unaff_RDI + 4) = uVar19;
                          iVar26 = iVar31 + 8;
                          *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                          *puVar54 = pbVar5 + 1;
                          *(int *)(puVar54 + 1) = iVar39;
                          piVar34 = (int *)((longlong)puVar54 + 0xc);
                          *piVar34 = *piVar34 + 1;
                          if (*piVar34 == 0) {
                            *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                          }
                          bVar55 = iVar31 < 0;
                          iVar31 = iVar26;
                        } while (bVar55);
                      }
                      else {
                        uVar19 = *(uint *)(unaff_RDI + 4);
                      }
                      iVar26 = iVar26 + -8;
                      *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                      uVar24 = 0xfffffffc;
                      auVar46 = local_80;
                      if ((char)(uVar19 >> ((byte)iVar26 & 0x1f)) == 'S') {
LAB_00ea5543:
                        *(undefined4 *)(unaff_RDI + 1) = 0x13;
                        if (iVar26 < 8) {
                          puVar54 = (undefined8 *)*unaff_RDI;
                          iVar39 = *(int *)(puVar54 + 1);
                          iVar31 = iVar26;
                          do {
                            iVar39 = iVar39 + -1;
                            if (iVar39 == -1) goto LAB_00ea68fd;
                            pbVar5 = (byte *)*puVar54;
                            uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                            *(uint *)(unaff_RDI + 4) = uVar19;
                            iVar26 = iVar31 + 8;
                            *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                            *puVar54 = pbVar5 + 1;
                            *(int *)(puVar54 + 1) = iVar39;
                            piVar34 = (int *)((longlong)puVar54 + 0xc);
                            *piVar34 = *piVar34 + 1;
                            if (*piVar34 == 0) {
                              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                            }
                            bVar55 = iVar31 < 0;
                            iVar31 = iVar26;
                          } while (bVar55);
                        }
                        else {
                          uVar19 = *(uint *)(unaff_RDI + 4);
                        }
                        uVar41 = iVar26 - 8;
                        *(uint *)((longlong)unaff_RDI + 0x24) = uVar41;
                        uVar24 = 0xfffffffc;
                        auVar46 = local_80;
                        if ((char)(uVar19 >> ((byte)uVar41 & 0x1f)) == 'Y') {
                          iVar26 = *(int *)(unaff_RDI + 6);
                          *(uint *)(unaff_RDI + 6) = iVar26 + 1U;
                          if (1 < *(int *)((longlong)unaff_RDI + 0x34)) {
                            local_48 = CONCAT44(uVar43,(uint)local_48);
                            auStack_5f._3_4_ = SUB84(pFVar49,0);
                            local_88 = auVar51;
                            local_6c = iVar53;
                            _local_60 = uVar22;
                            _fprintf((FILE *)(ulonglong)uVar41,(char *)(ulonglong)(iVar26 + 1U));
                            pFVar49 = (FILE *)(ulonglong)(uint)auStack_5f._3_4_;
                            auVar51 = local_88;
                            uVar43 = local_48._4_4_;
                            uVar22 = _local_60;
                            iVar53 = local_6c;
                          }
                          *(undefined4 *)(unaff_RDI + 0x18d) = 0;
switchD_00ea4a00_caseD_14:
                          *(undefined4 *)(unaff_RDI + 1) = 0x14;
                          iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
                          if (iVar26 < 8) {
                            puVar54 = (undefined8 *)*unaff_RDI;
                            iVar39 = *(int *)(puVar54 + 1);
                            iVar31 = iVar26;
                            do {
                              iVar39 = iVar39 + -1;
                              if (iVar39 == -1) goto LAB_00ea68fd;
                              pbVar5 = (byte *)*puVar54;
                              uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                              *(uint *)(unaff_RDI + 4) = uVar19;
                              iVar26 = iVar31 + 8;
                              *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                              *puVar54 = pbVar5 + 1;
                              *(int *)(puVar54 + 1) = iVar39;
                              piVar34 = (int *)((longlong)puVar54 + 0xc);
                              *piVar34 = *piVar34 + 1;
                              if (*piVar34 == 0) {
                                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                              }
                              bVar55 = iVar31 < 0;
                              iVar31 = iVar26;
                            } while (bVar55);
                          }
                          else {
                            uVar19 = *(uint *)(unaff_RDI + 4);
                          }
                          iVar26 = iVar26 + -8;
                          *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                          *(uint *)(unaff_RDI + 0x18d) =
                               uVar19 >> ((byte)iVar26 & 0x1f) & 0xff |
                               *(int *)(unaff_RDI + 0x18d) << 8;
                          *(undefined4 *)(unaff_RDI + 1) = 0x15;
joined_r0x00ea4c23:
                          if (iVar26 < 8) {
                            puVar54 = (undefined8 *)*unaff_RDI;
                            iVar39 = *(int *)(puVar54 + 1);
                            iVar31 = iVar26;
                            do {
                              iVar39 = iVar39 + -1;
                              if (iVar39 == -1) goto LAB_00ea68fd;
                              pbVar5 = (byte *)*puVar54;
                              uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                              *(uint *)(unaff_RDI + 4) = uVar19;
                              iVar26 = iVar31 + 8;
                              *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                              *puVar54 = pbVar5 + 1;
                              *(int *)(puVar54 + 1) = iVar39;
                              piVar34 = (int *)((longlong)puVar54 + 0xc);
                              *piVar34 = *piVar34 + 1;
                              if (*piVar34 == 0) {
                                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                              }
                              bVar55 = iVar31 < 0;
                              iVar31 = iVar26;
                            } while (bVar55);
                          }
                          else {
                            uVar19 = *(uint *)(unaff_RDI + 4);
                          }
                          iVar26 = iVar26 + -8;
                          *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                          *(uint *)(unaff_RDI + 0x18d) =
                               uVar19 >> ((byte)iVar26 & 0x1f) & 0xff |
                               *(int *)(unaff_RDI + 0x18d) << 8;
                          *(undefined4 *)(unaff_RDI + 1) = 0x16;
joined_r0x00ea4c96:
                          if (iVar26 < 8) {
                            puVar54 = (undefined8 *)*unaff_RDI;
                            iVar39 = *(int *)(puVar54 + 1);
                            iVar31 = iVar26;
                            do {
                              iVar39 = iVar39 + -1;
                              if (iVar39 == -1) goto LAB_00ea68fd;
                              pbVar5 = (byte *)*puVar54;
                              uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                              *(uint *)(unaff_RDI + 4) = uVar19;
                              iVar26 = iVar31 + 8;
                              *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                              *puVar54 = pbVar5 + 1;
                              *(int *)(puVar54 + 1) = iVar39;
                              piVar34 = (int *)((longlong)puVar54 + 0xc);
                              *piVar34 = *piVar34 + 1;
                              if (*piVar34 == 0) {
                                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                              }
                              bVar55 = iVar31 < 0;
                              iVar31 = iVar26;
                            } while (bVar55);
                          }
                          else {
                            uVar19 = *(uint *)(unaff_RDI + 4);
                          }
                          iVar26 = iVar26 + -8;
                          *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                          *(uint *)(unaff_RDI + 0x18d) =
                               uVar19 >> ((byte)iVar26 & 0x1f) & 0xff |
                               *(int *)(unaff_RDI + 0x18d) << 8;
                          *(undefined4 *)(unaff_RDI + 1) = 0x17;
joined_r0x00ea4d06:
                          if (iVar26 < 8) {
                            puVar54 = (undefined8 *)*unaff_RDI;
                            iVar39 = *(int *)(puVar54 + 1);
                            iVar31 = iVar26;
                            do {
                              iVar39 = iVar39 + -1;
                              if (iVar39 == -1) goto LAB_00ea68fd;
                              pbVar5 = (byte *)*puVar54;
                              uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                              *(uint *)(unaff_RDI + 4) = uVar19;
                              iVar26 = iVar31 + 8;
                              *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                              *puVar54 = pbVar5 + 1;
                              *(int *)(puVar54 + 1) = iVar39;
                              piVar34 = (int *)((longlong)puVar54 + 0xc);
                              *piVar34 = *piVar34 + 1;
                              if (*piVar34 == 0) {
                                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                              }
                              bVar55 = iVar31 < 0;
                              iVar31 = iVar26;
                            } while (bVar55);
                          }
                          else {
                            uVar19 = *(uint *)(unaff_RDI + 4);
                          }
                          iVar26 = iVar26 + -8;
                          *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                          *(uint *)(unaff_RDI + 0x18d) =
                               uVar19 >> ((byte)iVar26 & 0x1f) & 0xff |
                               *(int *)(unaff_RDI + 0x18d) << 8;
LAB_00ea56b4:
                          *(undefined4 *)(unaff_RDI + 1) = 0x18;
                          if (iVar26 < 1) {
                            puVar54 = (undefined8 *)*unaff_RDI;
                            iVar39 = *(int *)(puVar54 + 1);
                            iVar31 = iVar26;
                            do {
                              iVar39 = iVar39 + -1;
                              if (iVar39 == -1) goto LAB_00ea68fd;
                              pbVar5 = (byte *)*puVar54;
                              uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                              *(uint *)(unaff_RDI + 4) = uVar19;
                              iVar26 = iVar31 + 8;
                              *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                              *puVar54 = pbVar5 + 1;
                              *(int *)(puVar54 + 1) = iVar39;
                              piVar34 = (int *)((longlong)puVar54 + 0xc);
                              *piVar34 = *piVar34 + 1;
                              if (*piVar34 == 0) {
                                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                              }
                              bVar55 = iVar31 < -7;
                              iVar31 = iVar26;
                            } while (bVar55);
                          }
                          else {
                            uVar19 = *(uint *)(unaff_RDI + 4);
                          }
                          iVar26 = iVar26 + -1;
                          *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                          *(byte *)((longlong)unaff_RDI + 0x14) =
                               (byte)(uVar19 >> ((byte)iVar26 & 0x1f)) & 1;
                          *(undefined4 *)(unaff_RDI + 7) = 0;
                          *(undefined4 *)(unaff_RDI + 1) = 0x19;
                          local_98 = auVar50;
joined_r0x00ea4d7f:
                          if (iVar26 < 8) {
                            puVar54 = (undefined8 *)*unaff_RDI;
                            iVar39 = *(int *)(puVar54 + 1);
                            iVar31 = iVar26;
                            do {
                              iVar39 = iVar39 + -1;
                              auVar50 = local_98;
                              if (iVar39 == -1) goto LAB_00ea68fd;
                              pbVar5 = (byte *)*puVar54;
                              uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                              *(uint *)(unaff_RDI + 4) = uVar19;
                              iVar26 = iVar31 + 8;
                              *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                              *puVar54 = pbVar5 + 1;
                              *(int *)(puVar54 + 1) = iVar39;
                              piVar34 = (int *)((longlong)puVar54 + 0xc);
                              *piVar34 = *piVar34 + 1;
                              if (*piVar34 == 0) {
                                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                              }
                              bVar55 = iVar31 < 0;
                              iVar31 = iVar26;
                            } while (bVar55);
                          }
                          else {
                            uVar19 = *(uint *)(unaff_RDI + 4);
                          }
                          iVar26 = iVar26 + -8;
                          *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                          *(uint *)(unaff_RDI + 7) =
                               uVar19 >> ((byte)iVar26 & 0x1f) & 0xff | *(int *)(unaff_RDI + 7) << 8
                          ;
                          *(undefined4 *)(unaff_RDI + 1) = 0x1a;
joined_r0x00ea4df6:
                          if (iVar26 < 8) {
                            puVar54 = (undefined8 *)*unaff_RDI;
                            iVar39 = *(int *)(puVar54 + 1);
                            iVar31 = iVar26;
                            do {
                              iVar39 = iVar39 + -1;
                              auVar50 = local_98;
                              if (iVar39 == -1) goto LAB_00ea68fd;
                              pbVar5 = (byte *)*puVar54;
                              uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                              *(uint *)(unaff_RDI + 4) = uVar19;
                              iVar26 = iVar31 + 8;
                              *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                              *puVar54 = pbVar5 + 1;
                              *(int *)(puVar54 + 1) = iVar39;
                              piVar34 = (int *)((longlong)puVar54 + 0xc);
                              *piVar34 = *piVar34 + 1;
                              if (*piVar34 == 0) {
                                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                              }
                              bVar55 = iVar31 < 0;
                              iVar31 = iVar26;
                            } while (bVar55);
                          }
                          else {
                            uVar19 = *(uint *)(unaff_RDI + 4);
                          }
                          iVar26 = iVar26 + -8;
                          *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                          *(uint *)(unaff_RDI + 7) =
                               uVar19 >> ((byte)iVar26 & 0x1f) & 0xff | *(int *)(unaff_RDI + 7) << 8
                          ;
                          *(undefined4 *)(unaff_RDI + 1) = 0x1b;
joined_r0x00ea4e66:
                          if (iVar26 < 8) {
                            puVar54 = (undefined8 *)*unaff_RDI;
                            iVar39 = *(int *)(puVar54 + 1);
                            iVar31 = iVar26;
                            do {
                              iVar39 = iVar39 + -1;
                              auVar50 = local_98;
                              if (iVar39 == -1) goto LAB_00ea68fd;
                              pbVar5 = (byte *)*puVar54;
                              uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                              *(uint *)(unaff_RDI + 4) = uVar19;
                              iVar26 = iVar31 + 8;
                              *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                              *puVar54 = pbVar5 + 1;
                              *(int *)(puVar54 + 1) = iVar39;
                              piVar34 = (int *)((longlong)puVar54 + 0xc);
                              *piVar34 = *piVar34 + 1;
                              if (*piVar34 == 0) {
                                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                              }
                              bVar55 = iVar31 < 0;
                              iVar31 = iVar26;
                            } while (bVar55);
                          }
                          else {
                            uVar19 = *(uint *)(unaff_RDI + 4);
                          }
                          uVar57 = SUB84(auVar51,0);
                          *(int *)((longlong)unaff_RDI + 0x24) = iVar26 + -8;
                          uVar19 = uVar19 >> ((byte)(iVar26 + -8) & 0x1f) & 0xff |
                                   *(int *)(unaff_RDI + 7) << 8;
                          *(uint *)(unaff_RDI + 7) = uVar19;
                          uVar24 = 0xfffffffc;
                          if (((int)uVar19 < 0) ||
                             (uVar41 = 0,
                             (int)(*(int *)(unaff_RDI + 5) * 100000 | 10U) < (int)uVar19)) {
LAB_00ea68ff:
                            uVar19 = (uint)local_38;
                            _local_60 = uVar22;
                            goto LAB_00ea7aff;
                          }
                          while (auVar51 = (undefined1  [8])(ulonglong)uVar41, auVar50 = local_98,
                                (int)uVar41 < 0x10) {
switchD_00ea4a00_caseD_1c:
                            local_98 = auVar50;
                            *(undefined4 *)(unaff_RDI + 1) = 0x1c;
                            iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
                            if (iVar26 < 1) {
                              puVar54 = (undefined8 *)*unaff_RDI;
                              iVar39 = *(int *)(puVar54 + 1);
                              iVar31 = iVar26;
                              do {
                                iVar39 = iVar39 + -1;
                                auVar50 = local_98;
                                if (iVar39 == -1) goto LAB_00ea68fd;
                                pbVar5 = (byte *)*puVar54;
                                uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                                *(uint *)(unaff_RDI + 4) = uVar19;
                                iVar26 = iVar31 + 8;
                                *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                                *puVar54 = pbVar5 + 1;
                                *(int *)(puVar54 + 1) = iVar39;
                                piVar34 = (int *)((longlong)puVar54 + 0xc);
                                *piVar34 = *piVar34 + 1;
                                if (*piVar34 == 0) {
                                  *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                }
                                bVar55 = iVar31 < -7;
                                iVar31 = iVar26;
                              } while (bVar55);
                            }
                            else {
                              uVar19 = *(uint *)(unaff_RDI + 4);
                            }
                            *(uint *)((longlong)unaff_RDI + 0x24) = iVar26 - 1U;
                            *(bool *)((longlong)unaff_RDI + (longlong)SUB84(auVar51,0) + 0xd7c) =
                                 (uVar19 >> (iVar26 - 1U & 0x1f) & 1) != 0;
                            uVar41 = SUB84(auVar51,0) + 1;
                          }
                          *(undefined1 (*) [16])((longlong)unaff_RDI + 0xd6c) =
                               (undefined1  [16])0x0;
                          *(undefined1 (*) [16])((longlong)unaff_RDI + 0xd5c) =
                               (undefined1  [16])0x0;
                          *(undefined1 (*) [16])((longlong)unaff_RDI + 0xd4c) =
                               (undefined1  [16])0x0;
                          *(undefined1 (*) [16])((longlong)unaff_RDI + 0xd3c) =
                               (undefined1  [16])0x0;
                          *(undefined1 (*) [16])((longlong)unaff_RDI + 0xd2c) =
                               (undefined1  [16])0x0;
                          *(undefined1 (*) [16])((longlong)unaff_RDI + 0xd1c) =
                               (undefined1  [16])0x0;
                          *(undefined1 (*) [16])((longlong)unaff_RDI + 0xd0c) =
                               (undefined1  [16])0x0;
                          *(undefined1 (*) [16])((longlong)unaff_RDI + 0xcfc) =
                               (undefined1  [16])0x0;
                          *(undefined1 (*) [16])((longlong)unaff_RDI + 0xcec) =
                               (undefined1  [16])0x0;
                          *(undefined1 (*) [16])((longlong)unaff_RDI + 0xcdc) =
                               (undefined1  [16])0x0;
                          *(undefined1 (*) [16])((longlong)unaff_RDI + 0xccc) =
                               (undefined1  [16])0x0;
                          *(undefined1 (*) [16])((longlong)unaff_RDI + 0xcbc) =
                               (undefined1  [16])0x0;
                          *(undefined1 (*) [16])((longlong)unaff_RDI + 0xcac) =
                               (undefined1  [16])0x0;
                          *(undefined1 (*) [16])((longlong)unaff_RDI + 0xc9c) =
                               (undefined1  [16])0x0;
                          *(undefined1 (*) [16])((longlong)unaff_RDI + 0xc8c) =
                               (undefined1  [16])0x0;
                          *(undefined1 (*) [16])((longlong)unaff_RDI + 0xc7c) =
                               (undefined1  [16])0x0;
                          auVar51 = (undefined1  [8])0x0;
                          uVar52 = uStack_40;
                          while (iVar26 = SUB84(auVar51,0), auVar50 = local_98, iVar26 < 0x10) {
                            if (*(char *)((longlong)unaff_RDI + (longlong)iVar26 + 0xd7c) != '\0') {
                              local_70 = (undefined1  [4])0x0;
switchD_00ea4a00_caseD_1d:
                              do {
                                local_98 = auVar50;
                                iVar26 = SUB84(auVar51,0);
                                *(undefined4 *)(unaff_RDI + 1) = 0x1d;
                                iVar39 = *(int *)((longlong)unaff_RDI + 0x24);
                                auVar50 = local_98;
                                if (iVar39 < 1) {
                                  puVar54 = (undefined8 *)*unaff_RDI;
                                  iVar31 = *(int *)(puVar54 + 1);
                                  iVar21 = iVar39;
                                  do {
                                    iVar31 = iVar31 + -1;
                                    if (iVar31 == -1) goto LAB_00ea68fd;
                                    pbVar5 = (byte *)*puVar54;
                                    uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                                    *(uint *)(unaff_RDI + 4) = uVar19;
                                    iVar39 = iVar21 + 8;
                                    *(int *)((longlong)unaff_RDI + 0x24) = iVar39;
                                    *puVar54 = pbVar5 + 1;
                                    *(int *)(puVar54 + 1) = iVar31;
                                    piVar34 = (int *)((longlong)puVar54 + 0xc);
                                    *piVar34 = *piVar34 + 1;
                                    if (*piVar34 == 0) {
                                      *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                    }
                                    bVar55 = iVar21 < -7;
                                    iVar21 = iVar39;
                                  } while (bVar55);
                                }
                                else {
                                  uVar19 = *(uint *)(unaff_RDI + 4);
                                }
                                *(uint *)((longlong)unaff_RDI + 0x24) = iVar39 - 1U;
                                if ((uVar19 >> (iVar39 - 1U & 0x1f) & 1) != 0) {
                                  *(undefined1 *)
                                   ((longlong)unaff_RDI +
                                   (longlong)(iVar26 * 0x10 + (int)local_70) + 0xc7c) = 1;
                                }
                                local_70 = (undefined1  [4])((int)local_70 + 1);
                                uVar52 = uStack_40;
                              } while ((int)local_70 < 0x10);
                            }
                            auVar51 = (undefined1  [8])(ulonglong)(iVar26 + 1);
                          }
                          *(undefined4 *)(unaff_RDI + 399) = 0;
                          iVar26 = 0;
                          lVar28 = 0;
                          do {
                            if (*(char *)((longlong)unaff_RDI + lVar28 + 0xc7c) != '\0') {
                              *(char *)((longlong)unaff_RDI + (longlong)iVar26 + 0xd8c) =
                                   (char)lVar28;
                              iVar26 = *(int *)(unaff_RDI + 399) + 1;
                              *(int *)(unaff_RDI + 399) = iVar26;
                            }
                            if (*(char *)((longlong)unaff_RDI + lVar28 + 0xc7d) != '\0') {
                              *(char *)((longlong)unaff_RDI + (longlong)iVar26 + 0xd8c) =
                                   (char)lVar28 + '\x01';
                              iVar26 = *(int *)(unaff_RDI + 399) + 1;
                              *(int *)(unaff_RDI + 399) = iVar26;
                            }
                            lVar28 = lVar28 + 2;
                          } while (lVar28 != 0x100);
                          if (iVar26 == 0) {
                            uVar24 = 0xfffffffc;
                            uStack_40 = uVar52;
                            auVar46 = local_80;
                          }
                          else {
                            uVar43 = iVar26 + 2;
switchD_00ea4a00_caseD_1e:
                            *(undefined4 *)(unaff_RDI + 1) = 0x1e;
                            iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
                            if (iVar26 < 3) {
                              puVar54 = (undefined8 *)*unaff_RDI;
                              iVar39 = *(int *)(puVar54 + 1);
                              iVar31 = iVar26;
                              do {
                                iVar39 = iVar39 + -1;
                                if (iVar39 == -1) goto LAB_00ea68fd;
                                pbVar5 = (byte *)*puVar54;
                                uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                                *(uint *)(unaff_RDI + 4) = uVar19;
                                iVar26 = iVar31 + 8;
                                *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                                *puVar54 = pbVar5 + 1;
                                *(int *)(puVar54 + 1) = iVar39;
                                piVar34 = (int *)((longlong)puVar54 + 0xc);
                                *piVar34 = *piVar34 + 1;
                                if (*piVar34 == 0) {
                                  *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                }
                                bVar55 = iVar31 < -5;
                                iVar31 = iVar26;
                              } while (bVar55);
                            }
                            else {
                              uVar19 = *(uint *)(unaff_RDI + 4);
                            }
                            iVar26 = iVar26 + -3;
                            uVar40 = uVar19 >> ((byte)iVar26 & 0x1f) & 7;
                            *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                            local_98 = auVar50;
                            if ((7 < uVar40) ||
                               (uVar24 = 0xfffffffc, auVar46 = local_80, (0x83U >> uVar40 & 1) == 0)
                               ) {
LAB_00ea4ecb:
                              uVar57 = SUB84(auVar51,0);
                              *(undefined4 *)(unaff_RDI + 1) = 0x1f;
                              if (iVar26 < 0xf) {
                                puVar54 = (undefined8 *)*unaff_RDI;
                                iVar39 = *(int *)(puVar54 + 1);
                                iVar31 = iVar26;
                                do {
                                  iVar39 = iVar39 + -1;
                                  auVar50 = local_98;
                                  if (iVar39 == -1) goto LAB_00ea68fd;
                                  pbVar5 = (byte *)*puVar54;
                                  uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                                  *(uint *)(unaff_RDI + 4) = uVar19;
                                  iVar26 = iVar31 + 8;
                                  *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                                  *puVar54 = pbVar5 + 1;
                                  *(int *)(puVar54 + 1) = iVar39;
                                  piVar34 = (int *)((longlong)puVar54 + 0xc);
                                  *piVar34 = *piVar34 + 1;
                                  if (*piVar34 == 0) {
                                    *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                  }
                                  bVar55 = iVar31 < 7;
                                  iVar31 = iVar26;
                                } while (bVar55);
                              }
                              else {
                                uVar19 = *(uint *)(unaff_RDI + 4);
                              }
                              auVar51 = (undefined1  [8])0x0;
                              *(int *)((longlong)unaff_RDI + 0x24) = iVar26 + -0xf;
                              uVar22 = uVar19 >> ((byte)(iVar26 + -0xf) & 0x1f) & 0x7fff;
                              auVar46 = local_78;
                              uVar19 = uVar40;
                              if (uVar22 != 0) {
                                while (local_78 = auVar46, SUB84(auVar51,0) < (int)uVar22) {
                                  local_70 = (undefined1  [4])0x0;
                                  auVar50 = local_98;
switchD_00ea4a00_caseD_20:
                                  local_98 = auVar50;
                                  while( true ) {
                                    *(undefined4 *)(unaff_RDI + 1) = 0x20;
                                    iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
                                    auVar50 = local_98;
                                    if (iVar26 < 1) {
                                      puVar54 = (undefined8 *)*unaff_RDI;
                                      iVar39 = *(int *)(puVar54 + 1);
                                      iVar31 = iVar26;
                                      do {
                                        iVar39 = iVar39 + -1;
                                        if (iVar39 == -1) goto LAB_00ea68fd;
                                        pbVar5 = (byte *)*puVar54;
                                        uVar41 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                                        *(uint *)(unaff_RDI + 4) = uVar41;
                                        iVar26 = iVar31 + 8;
                                        *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                                        *puVar54 = pbVar5 + 1;
                                        *(int *)(puVar54 + 1) = iVar39;
                                        piVar34 = (int *)((longlong)puVar54 + 0xc);
                                        *piVar34 = *piVar34 + 1;
                                        if (*piVar34 == 0) {
                                          *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                        }
                                        bVar55 = iVar31 < -7;
                                        iVar31 = iVar26;
                                      } while (bVar55);
                                    }
                                    else {
                                      uVar41 = *(uint *)(unaff_RDI + 4);
                                    }
                                    *(uint *)((longlong)unaff_RDI + 0x24) = iVar26 - 1U;
                                    if ((uVar41 >> (iVar26 - 1U & 0x1f) & 1) == 0) break;
                                    local_70 = (undefined1  [4])((int)local_70 + 1);
                                    uVar24 = 0xfffffffc;
                                    auVar46 = local_80;
                                    if ((int)uVar40 <= (int)local_70) goto LAB_00ea7afb;
                                  }
                                  iVar26 = SUB84(auVar51,0);
                                  if (iVar26 < 0x4652) {
                                    *(char *)((longlong)unaff_RDI + (longlong)iVar26 + 0x651e) =
                                         SUB41(local_70,0);
                                  }
                                  auVar46 = local_78;
                                  auVar51 = (undefined1  [8])(ulonglong)(iVar26 + 1);
                                }
                                uVar52 = 0x4652;
                                if ((int)uVar22 < 0x4652) {
                                  uVar52 = (ulonglong)uVar22;
                                }
                                if (0 < (int)uVar40) {
                                  if (uVar40 < 0x20) {
                                    uVar35 = 0;
                                  }
                                  else {
                                    uVar35 = 0;
                                    if (((char)(uVar40 - 1) != -1) && (uVar40 - 1 < 0x100)) {
                                      uVar56 = uVar40 & 0xffffffe0;
                                      uVar35 = (ulonglong)uVar56;
                                      stack0xffffffffffffffa8 = _DAT_023e2040;
                                      uStack_50 = _UNK_023e2048;
                                      local_48 = _DAT_023e20f0;
                                      uStack_40 = _UNK_023e20f8;
                                      if (uVar56 != 0x20) {
                                        local_38 = _DAT_023e2100;
                                      }
                                      if (uVar40 == uVar56) goto LAB_00ea6c05;
                                    }
                                  }
                                  do {
                                    auStack_5f[(uVar35 & 0xff) + 7] = (char)uVar35;
                                    bVar18 = (char)uVar35 + 1;
                                    uVar35 = (ulonglong)bVar18;
                                  } while ((int)(uint)bVar18 < (int)uVar40);
                                }
LAB_00ea6c05:
                                uVar41 = 0;
                                auVar51 = (undefined1  [8])0x0;
                                uVar56 = uVar19;
                                if (0 < (int)uVar22) {
                                  local_48 = CONCAT44(uVar43,(uint)local_48);
                                  auStack_5f._3_4_ = (uint)pFVar49;
                                  local_88._0_4_ = (int)uVar52;
                                  auVar51 = (undefined1  [8])1;
                                  if (1 < (int)uVar52) {
                                    auVar51 = (undefined1  [8])uVar52;
                                  }
                                  uVar52 = 0;
                                  do {
                                    bVar18 = *(byte *)((longlong)unaff_RDI + uVar52 + 0x651e);
                                    uVar35 = (ulonglong)bVar18;
                                    uVar3 = auStack_5f[uVar35 + 7];
                                    if (uVar35 != 0) {
                                      bVar25 = bVar18 - 1;
                                      uVar45 = uVar35;
                                      if (6 < bVar25) {
                                        puVar27 = (undefined1 *)(ulonglong)(uint)bVar25;
                                        if (((((uint)bVar25 <= bVar18 - 1) &&
                                             (puVar27 <= auStack_5f + uVar35 + 7)) &&
                                            (puVar27 <= auStack_5f + (ulonglong)(bVar18 - 1) + 7))
                                           && ((auStack_57 + (bVar18 - 1) <=
                                                auStack_5f + (uVar35 - (longlong)puVar27) + 7 ||
                                               (auStack_57 + uVar35 <=
                                                auStack_5f +
                                                ((ulonglong)(bVar18 - 1) - (longlong)puVar27) + 7)))
                                           ) {
                                          puVar27 = puVar27 + 1;
                                          if (bVar25 < 0x1f) {
                                            puVar42 = (undefined1 *)0x0;
                                          }
                                          else {
                                            uVar43 = (uint)puVar27 & 0xffffffe0;
                                            puVar42 = (undefined1 *)(ulonglong)uVar43;
                                            uVar45 = ((ulonglong)(puVar42 + -0x20) >> 5) + 1;
                                            if (puVar42 + -0x20 == (undefined1 *)0x0) {
                                              lVar28 = 0;
                                            }
                                            else {
                                              local_6c = iVar53;
                                              lVar44 = -(uVar45 & 0xfffffffffffffffe);
                                              lVar28 = 0;
                                              do {
                                                uVar37 = (ulonglong)((bVar18 - 1) + (int)lVar28);
                                                uVar24 = *(undefined8 *)(local_78 + uVar37 + 1);
                                                uVar14 = *(undefined8 *)(local_70 + uVar37 + 1);
                                                uVar17 = *(undefined8 *)(auStack_5f + uVar37);
                                                *(undefined8 *)(local_68 + lVar28 + uVar35 + 1) =
                                                     *(undefined8 *)(local_68 + uVar37 + 1);
                                                *(undefined8 *)
                                                 ((longlong)(local_68 + lVar28 + uVar35 + 1) + 8) =
                                                     uVar17;
                                                *(undefined8 *)(local_78 + lVar28 + uVar35 + 1) =
                                                     uVar24;
                                                *(undefined8 *)
                                                 ((longlong)(local_78 + lVar28 + uVar35 + 1) + 8) =
                                                     uVar14;
                                                uVar37 = (ulonglong)((bVar18 - 0x21) + (int)lVar28);
                                                uVar24 = *(undefined8 *)(local_78 + uVar37 + 1);
                                                uVar14 = *(undefined8 *)(local_70 + uVar37 + 1);
                                                uVar23 = *(undefined4 *)(local_68 + uVar37 + 5);
                                                uVar15 = *(undefined4 *)(auStack_5f + uVar37);
                                                uVar16 = *(undefined4 *)(auStack_5f + uVar37 + 4);
                                                puVar2 = (undefined4 *)
                                                         (local_88 + lVar28 + uVar35 + 1);
                                                *puVar2 = *(undefined4 *)(local_68 + uVar37 + 1);
                                                puVar2[1] = uVar23;
                                                puVar2[2] = uVar15;
                                                puVar2[3] = uVar16;
                                                *(undefined8 *)(local_98 + lVar28 + uVar35 + 1) =
                                                     uVar24;
                                                *(undefined8 *)
                                                 ((longlong)(local_98 + lVar28 + uVar35 + 1) + 8) =
                                                     uVar14;
                                                lVar28 = lVar28 + -0x40;
                                                lVar44 = lVar44 + 2;
                                              } while (lVar44 != 0);
                                              lVar28 = -lVar28;
                                              auVar46 = local_78;
                                              iVar53 = local_6c;
                                            }
                                            if ((uVar45 & 1) != 0) {
                                              lVar28 = uVar35 - lVar28;
                                              uVar45 = (ulonglong)((int)lVar28 - 1);
                                              uVar24 = *(undefined8 *)(local_78 + uVar45 + 1);
                                              uVar14 = *(undefined8 *)(local_70 + uVar45 + 1);
                                              uVar23 = *(undefined4 *)(local_68 + uVar45 + 5);
                                              uVar15 = *(undefined4 *)(auStack_5f + uVar45);
                                              uVar16 = *(undefined4 *)(auStack_5f + uVar45 + 4);
                                              *(undefined4 *)(local_68 + lVar28 + 1) =
                                                   *(undefined4 *)(local_68 + uVar45 + 1);
                                              *(undefined4 *)(local_68 + lVar28 + 5) = uVar23;
                                              *(undefined4 *)(auStack_5f + lVar28) = uVar15;
                                              *(undefined4 *)(auStack_5f + lVar28 + 4) = uVar16;
                                              *(undefined8 *)(local_78 + lVar28 + 1) = uVar24;
                                              *(undefined8 *)(local_70 + lVar28 + 1) = uVar14;
                                            }
                                            if (puVar27 == puVar42) goto LAB_00ea6c3e;
                                            if (((ulonglong)puVar27 & 0x18) == 0) {
                                              uVar35 = uVar35 - (longlong)puVar42;
                                              uVar45 = (ulonglong)(byte)(bVar18 - (char)uVar43);
                                              goto LAB_00ea6c78;
                                            }
                                          }
                                          uVar43 = (uint)puVar27 & 0xfffffff8;
                                          puVar47 = (undefined1 *)(ulonglong)uVar43;
                                          lVar28 = -(longlong)puVar42;
                                          do {
                                            *(undefined8 *)(auStack_5f + lVar28 + uVar35) =
                                                 *(undefined8 *)
                                                  (auStack_5f + ((bVar18 - 1) + (int)lVar28));
                                            lVar28 = lVar28 + -8;
                                          } while ((undefined1 *)-lVar28 != puVar47);
                                          uVar35 = uVar35 - (longlong)puVar47;
                                          auVar46 = local_78;
                                          uVar45 = (ulonglong)(byte)(bVar18 - (char)uVar43);
                                          if (puVar27 == puVar47) goto LAB_00ea6c3e;
                                        }
                                      }
LAB_00ea6c78:
                                      cVar48 = (char)uVar45;
                                      cVar29 = cVar48;
                                      if ((uVar45 & 1) != 0) {
                                        auStack_5f[uVar35 + 7] =
                                             auStack_5f[(ulonglong)((int)uVar35 - 1) + 7];
                                        uVar35 = uVar35 - 1;
                                        cVar29 = cVar48 + -1;
                                      }
                                      if (cVar48 != '\x01') {
                                        uVar45 = uVar35 + 0xffffffff;
                                        lVar28 = 0;
                                        do {
                                          auStack_5f[lVar28 + uVar35 + 7] =
                                               auStack_5f[(uVar45 & 0xffffffff) + 7];
                                          auStack_5f[lVar28 + uVar35 + 6] =
                                               auStack_5f[(ulonglong)((int)uVar45 - 1) + 7];
                                          uVar45 = uVar45 - 2;
                                          lVar28 = lVar28 + -2;
                                        } while (-cVar29 != (char)lVar28);
                                      }
                                    }
LAB_00ea6c3e:
                                    stack0xffffffffffffffa8 = CONCAT71(auStack_57,uVar3);
                                    (&DAT_00001ecc + (longlong)unaff_RDI)[uVar52] = uVar3;
                                    uVar52 = uVar52 + 1;
                                  } while ((undefined1  [8])uVar52 != auVar51);
                                  pFVar49 = (FILE *)(ulonglong)(uint)auStack_5f._3_4_;
                                  uVar41 = 0;
                                  uVar52 = (ulonglong)local_88 & 0xffffffff;
                                  uVar43 = local_48._4_4_;
                                }
                                while (uVar22 = (uint)uVar52, local_78 = auVar46, auVar50 = local_98
                                      , uVar19 = uVar56, (int)uVar41 < (int)uVar56) {
switchD_00ea4a00_caseD_21:
                                  uVar56 = uVar41;
                                  *(undefined4 *)(unaff_RDI + 1) = 0x21;
                                  iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
                                  if (iVar26 < 5) {
                                    puVar54 = (undefined8 *)*unaff_RDI;
                                    iVar39 = *(int *)(puVar54 + 1);
                                    iVar31 = iVar26;
                                    do {
                                      iVar39 = iVar39 + -1;
                                      if (iVar39 == -1) goto LAB_00ea68fd;
                                      pbVar5 = (byte *)*puVar54;
                                      uVar41 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                                      *(uint *)(unaff_RDI + 4) = uVar41;
                                      iVar26 = iVar31 + 8;
                                      *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                                      *puVar54 = pbVar5 + 1;
                                      *(int *)(puVar54 + 1) = iVar39;
                                      piVar34 = (int *)((longlong)puVar54 + 0xc);
                                      *piVar34 = *piVar34 + 1;
                                      if (*piVar34 == 0) {
                                        *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                      }
                                      bVar55 = iVar31 < -3;
                                      iVar31 = iVar26;
                                    } while (bVar55);
                                  }
                                  else {
                                    uVar41 = *(uint *)(unaff_RDI + 4);
                                  }
                                  uVar20 = uVar41 >> ((byte)(iVar26 + -5) & 0x1f) & 0x1f;
                                  *(int *)((longlong)unaff_RDI + 0x24) = iVar26 + -5;
                                  auVar51 = (undefined1  [8])0x0;
                                  auVar46 = local_78;
                                  local_98 = auVar50;
                                  if (0 < (int)uVar43) {
                                    do {
                                      uVar57 = SUB84(auVar51,0);
                                      local_98 = auVar50;
                                      while( true ) {
                                        auVar50 = local_98;
                                        if (0x13 < uVar20 - 1) {
                                          uVar19 = (uint)local_38;
                                          uVar24 = 0xfffffffc;
                                          _local_60 = uVar22;
                                          goto LAB_00ea7aff;
                                        }
switchD_00ea4a00_caseD_22:
                                        *(undefined4 *)(unaff_RDI + 1) = 0x22;
                                        iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
                                        if (iVar26 < 1) {
                                          puVar54 = (undefined8 *)*unaff_RDI;
                                          iVar39 = *(int *)(puVar54 + 1);
                                          iVar31 = iVar26;
                                          do {
                                            iVar39 = iVar39 + -1;
                                            if (iVar39 == -1) goto LAB_00ea68fd;
                                            pbVar5 = (byte *)*puVar54;
                                            uVar57 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                                            *(uint *)(unaff_RDI + 4) = uVar57;
                                            iVar26 = iVar31 + 8;
                                            *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                                            *puVar54 = pbVar5 + 1;
                                            *(int *)(puVar54 + 1) = iVar39;
                                            piVar34 = (int *)((longlong)puVar54 + 0xc);
                                            *piVar34 = *piVar34 + 1;
                                            if (*piVar34 == 0) {
                                              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                            }
                                            bVar55 = iVar31 < -7;
                                            iVar31 = iVar26;
                                          } while (bVar55);
                                        }
                                        else {
                                          uVar57 = *(uint *)(unaff_RDI + 4);
                                        }
                                        uVar41 = iVar26 - 1;
                                        *(uint *)((longlong)unaff_RDI + 0x24) = uVar41;
                                        if ((uVar57 >> (uVar41 & 0x1f) & 1) == 0) break;
LAB_00ea5e0c:
                                        uVar57 = SUB84(auVar51,0);
                                        *(undefined4 *)(unaff_RDI + 1) = 0x23;
                                        if ((int)uVar41 < 1) {
                                          puVar54 = (undefined8 *)*unaff_RDI;
                                          iVar26 = *(int *)(puVar54 + 1);
                                          uVar58 = uVar41;
                                          do {
                                            iVar26 = iVar26 + -1;
                                            if (iVar26 == -1) goto LAB_00ea68fd;
                                            pbVar5 = (byte *)*puVar54;
                                            uVar59 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                                            *(uint *)(unaff_RDI + 4) = uVar59;
                                            uVar41 = uVar58 + 8;
                                            *(uint *)((longlong)unaff_RDI + 0x24) = uVar41;
                                            *puVar54 = pbVar5 + 1;
                                            *(int *)(puVar54 + 1) = iVar26;
                                            piVar34 = (int *)((longlong)puVar54 + 0xc);
                                            *piVar34 = *piVar34 + 1;
                                            if (*piVar34 == 0) {
                                              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                            }
                                            bVar55 = (int)uVar58 < -7;
                                            uVar58 = uVar41;
                                          } while (bVar55);
                                        }
                                        else {
                                          uVar59 = *(uint *)(unaff_RDI + 4);
                                        }
                                        *(uint *)((longlong)unaff_RDI + 0x24) = uVar41 - 1;
                                        uVar20 = (uVar20 - 1) +
                                                 (uint)((uVar59 >> (uVar41 - 1 & 0x1f) & 1) == 0) *
                                                 2;
                                        local_98 = auVar50;
                                      }
                                      *(char *)((longlong)unaff_RDI +
                                               (longlong)SUB84(auVar51,0) + 0xab70 +
                                               (longlong)(int)uVar56 * 0x102) = (char)uVar20;
                                      uVar41 = SUB84(auVar51,0) + 1;
                                      auVar51 = (undefined1  [8])(ulonglong)uVar41;
                                      auVar46 = local_78;
                                      local_98 = auVar50;
                                    } while ((int)uVar41 < (int)uVar43);
                                  }
                                  uVar52 = (ulonglong)uVar22;
                                  uVar41 = uVar56 + 1;
                                  uVar56 = uVar19;
                                }
                                auStack_5f._3_4_ = SUB84(pFVar49,0);
                                local_88._0_4_ = uVar22;
                                if ((int)uVar56 < 1) {
                                  uVar56 = 0;
                                }
                                else {
                                  _local_68 = (ulonglong)uVar40;
                                  if ((int)uVar43 < 1) {
                                    puVar36 = &UNK_0000b17c + (longlong)unaff_RDI;
                                    puVar54 = unaff_RDI + 0x156e;
                                    uVar52 = 0;
                                    do {
                                      FUN_00ea9250(puVar54,FUN_00003060 + (longlong)puVar36,0x20,0);
                                      *(undefined4 *)((longlong)unaff_RDI + uVar52 * 4 + 0xfa0c) =
                                           0x20;
                                      uVar52 = uVar52 + 1;
                                      puVar36 = puVar36 + 0x408;
                                      puVar54 = (undefined8 *)((longlong)puVar54 + 0x102);
                                    } while (_local_68 != uVar52);
                                  }
                                  else {
                                    local_48 = CONCAT44(uVar43,(uint)local_48);
                                    if (uVar43 < 8) {
                                      _local_68 = -_local_68;
                                      lVar28 = 0xab70;
                                      uVar52 = 0x3e83;
                                      lVar44 = 0xe1dc;
                                      uVar22 = uVar43;
                                      do {
                                        bVar18 = *(byte *)((longlong)unaff_RDI + lVar28);
                                        uVar19 = 0x20;
                                        if (bVar18 < 0x20) {
                                          uVar19 = (uint)bVar18;
                                        }
                                        uVar43 = local_48._4_4_;
                                        uVar41 = (uint)bVar18;
                                        if (uVar22 != 1) {
                                          bVar25 = *(byte *)((longlong)unaff_RDI + lVar28 + 1);
                                          uVar41 = (uint)bVar18;
                                          if ((uint)bVar18 < (uint)bVar25) {
                                            uVar41 = (uint)bVar25;
                                          }
                                          if (bVar25 < uVar19) {
                                            uVar19 = (uint)bVar25;
                                          }
                                          if (uVar22 != 2) {
                                            bVar18 = *(byte *)((longlong)unaff_RDI + lVar28 + 2);
                                            if (uVar41 < bVar18) {
                                              uVar41 = (uint)bVar18;
                                            }
                                            if (bVar18 < uVar19) {
                                              uVar19 = (uint)bVar18;
                                            }
                                            if (uVar22 != 3) {
                                              bVar18 = *(byte *)((longlong)unaff_RDI + lVar28 + 3);
                                              if (uVar41 < bVar18) {
                                                uVar41 = (uint)bVar18;
                                              }
                                              if (bVar18 < uVar19) {
                                                uVar19 = (uint)bVar18;
                                              }
                                              if (uVar22 != 4) {
                                                bVar18 = *(byte *)((longlong)unaff_RDI + lVar28 + 4)
                                                ;
                                                if (uVar41 < bVar18) {
                                                  uVar41 = (uint)bVar18;
                                                }
                                                uVar22 = (uint)bVar18;
                                                if (uVar19 <= bVar18) {
                                                  uVar22 = uVar19;
                                                }
                                                uVar19 = uVar22;
                                                if (local_48._4_4_ != 5) {
                                                  bVar18 = *(byte *)((longlong)unaff_RDI +
                                                                    lVar28 + 5);
                                                  uVar57 = (uint)bVar18;
                                                  uVar58 = (uint)bVar18;
                                                  if (bVar18 <= uVar41) {
                                                    uVar58 = uVar41;
                                                  }
                                                  if (uVar22 <= bVar18) {
                                                    uVar57 = uVar22;
                                                  }
                                                  uVar19 = uVar57;
                                                  uVar41 = uVar58;
                                                  if (local_48._4_4_ != 6) {
                                                    bVar18 = *(byte *)((longlong)unaff_RDI +
                                                                      lVar28 + 6);
                                                    uVar19 = (uint)bVar18;
                                                    uVar41 = uVar19;
                                                    if (uVar19 <= uVar58) {
                                                      uVar41 = uVar58;
                                                    }
                                                    if (uVar57 <= bVar18) {
                                                      uVar19 = uVar57;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        local_80._0_4_ = uVar19;
                                        uStack_40 = uVar52;
                                        FUN_00ea9250(lVar28 + (longlong)unaff_RDI,
                                                     lVar44 + (longlong)unaff_RDI,uVar19,uVar41);
                                        *(undefined4 *)((longlong)unaff_RDI + uStack_40 * 4) =
                                             local_80._0_4_;
                                        lVar28 = lVar28 + 0x102;
                                        uVar52 = uStack_40 + 1;
                                        lVar44 = lVar44 + 0x408;
                                        uVar22 = uVar43;
                                      } while (_local_68 + uStack_40 != 0x3e82);
                                    }
                                    else {
                                      lVar28 = (longlong)unaff_RDI + 0xab74;
                                      puVar54 = unaff_RDI + 0x156e;
                                      uVar52 = 0;
                                      do {
                                        uVar61 = 0;
                                        uVar62 = 0;
                                        uVar63 = 0;
                                        uVar64 = 0;
                                        uVar35 = 0;
                                        uVar65 = 0;
                                        uVar66 = 0;
                                        uVar67 = 0;
                                        uVar68 = 0;
                                        uVar56 = _DAT_023de310;
                                        uVar22 = _UNK_023de314;
                                        uVar19 = _UNK_023de318;
                                        uVar41 = _UNK_023de31c;
                                        uVar57 = _DAT_023de310;
                                        uVar58 = _UNK_023de314;
                                        uVar59 = _UNK_023de318;
                                        uVar60 = _UNK_023de31c;
                                        do {
                                          in_XMM4 = pmovzxbd(in_XMM4,*(undefined4 *)
                                                                      (lVar28 + -4 + uVar35));
                                          in_XMM5 = pmovzxbd(in_XMM5,*(undefined4 *)
                                                                      (lVar28 + uVar35));
                                          uVar6 = in_XMM4._0_4_;
                                          uVar61 = (uVar61 < uVar6) * uVar6 |
                                                   (uVar61 >= uVar6) * uVar61;
                                          uVar8 = in_XMM4._4_4_;
                                          uVar62 = (uVar62 < uVar8) * uVar8 |
                                                   (uVar62 >= uVar8) * uVar62;
                                          uVar10 = in_XMM4._8_4_;
                                          uVar63 = (uVar63 < uVar10) * uVar10 |
                                                   (uVar63 >= uVar10) * uVar63;
                                          uVar12 = in_XMM4._12_4_;
                                          uVar64 = (uVar64 < uVar12) * uVar12 |
                                                   (uVar64 >= uVar12) * uVar64;
                                          uVar7 = in_XMM5._0_4_;
                                          uVar65 = (uVar65 < uVar7) * uVar7 |
                                                   (uVar65 >= uVar7) * uVar65;
                                          uVar9 = in_XMM5._4_4_;
                                          uVar66 = (uVar66 < uVar9) * uVar9 |
                                                   (uVar66 >= uVar9) * uVar66;
                                          uVar11 = in_XMM5._8_4_;
                                          uVar67 = (uVar67 < uVar11) * uVar11 |
                                                   (uVar67 >= uVar11) * uVar67;
                                          uVar13 = in_XMM5._12_4_;
                                          uVar68 = (uVar68 < uVar13) * uVar13 |
                                                   (uVar68 >= uVar13) * uVar68;
                                          uVar56 = ((int)uVar6 < (int)uVar56) * uVar6 |
                                                   ((int)uVar6 >= (int)uVar56) * uVar56;
                                          uVar22 = ((int)uVar8 < (int)uVar22) * uVar8 |
                                                   ((int)uVar8 >= (int)uVar22) * uVar22;
                                          uVar19 = ((int)uVar10 < (int)uVar19) * uVar10 |
                                                   ((int)uVar10 >= (int)uVar19) * uVar19;
                                          uVar41 = ((int)uVar12 < (int)uVar41) * uVar12 |
                                                   ((int)uVar12 >= (int)uVar41) * uVar41;
                                          uVar57 = ((int)uVar7 < (int)uVar57) * uVar7 |
                                                   ((int)uVar7 >= (int)uVar57) * uVar57;
                                          uVar58 = ((int)uVar9 < (int)uVar58) * uVar9 |
                                                   ((int)uVar9 >= (int)uVar58) * uVar58;
                                          uVar59 = ((int)uVar11 < (int)uVar59) * uVar11 |
                                                   ((int)uVar11 >= (int)uVar59) * uVar59;
                                          uVar60 = ((int)uVar13 < (int)uVar60) * uVar13 |
                                                   ((int)uVar13 >= (int)uVar60) * uVar60;
                                          uVar35 = uVar35 + 8;
                                        } while ((uVar43 & 0xfffffff8) != uVar35);
                                        uVar61 = (uVar61 < uVar65) * uVar65 |
                                                 (uVar61 >= uVar65) * uVar61;
                                        uVar62 = (uVar62 < uVar66) * uVar66 |
                                                 (uVar62 >= uVar66) * uVar62;
                                        uVar63 = (uVar63 < uVar67) * uVar67 |
                                                 (uVar63 >= uVar67) * uVar63;
                                        uVar64 = (uVar64 < uVar68) * uVar68 |
                                                 (uVar64 >= uVar68) * uVar64;
                                        uVar61 = (uVar63 < uVar61) * uVar61 |
                                                 (uVar63 >= uVar61) * uVar63;
                                        uVar62 = (uVar64 < uVar62) * uVar62 |
                                                 (uVar64 >= uVar62) * uVar64;
                                        uVar61 = (uVar62 < uVar61) * uVar61 |
                                                 (uVar62 >= uVar61) * uVar62;
                                        uVar56 = ((int)uVar57 < (int)uVar56) * uVar57 |
                                                 ((int)uVar57 >= (int)uVar56) * uVar56;
                                        uVar22 = ((int)uVar58 < (int)uVar22) * uVar58 |
                                                 ((int)uVar58 >= (int)uVar22) * uVar22;
                                        uVar19 = ((int)uVar59 < (int)uVar19) * uVar59 |
                                                 ((int)uVar59 >= (int)uVar19) * uVar19;
                                        uVar41 = ((int)uVar60 < (int)uVar41) * uVar60 |
                                                 ((int)uVar60 >= (int)uVar41) * uVar41;
                                        uVar56 = ((int)uVar56 < (int)uVar19) * uVar56 |
                                                 ((int)uVar56 >= (int)uVar19) * uVar19;
                                        uVar22 = ((int)uVar22 < (int)uVar41) * uVar22 |
                                                 ((int)uVar22 >= (int)uVar41) * uVar41;
                                        uVar56 = ((int)uVar56 < (int)uVar22) * uVar56 |
                                                 ((int)uVar56 >= (int)uVar22) * uVar22;
                                        for (uVar35 = (ulonglong)(uVar43 & 0xfffffff8);
                                            uVar35 != uVar43; uVar35 = uVar35 + 1) {
                                          bVar18 = *(byte *)((longlong)puVar54 + uVar35);
                                          if (uVar61 < bVar18) {
                                            uVar61 = (uint)bVar18;
                                          }
                                          if ((int)(uint)bVar18 < (int)uVar56) {
                                            uVar56 = (uint)bVar18;
                                          }
                                        }
                                        uStack_40 = uVar52;
                                        FUN_00ea9250((longlong)unaff_RDI + uVar52 * 0x102 + 0xab70,
                                                     (longlong)unaff_RDI + uVar52 * 0x408 + 0xe1dc,
                                                     uVar56);
                                        *(uint *)((longlong)unaff_RDI + uStack_40 * 4 + 0xfa0c) =
                                             uVar56;
                                        uVar52 = uStack_40 + 1;
                                        lVar28 = lVar28 + 0x102;
                                        puVar54 = (undefined8 *)((longlong)puVar54 + 0x102);
                                      } while (uVar52 != _local_68);
                                      uVar43 = local_48._4_4_;
                                      uVar56 = uVar40;
                                    }
                                  }
                                }
                                iVar26 = *(int *)(unaff_RDI + 399);
                                local_b4 = *(int *)(unaff_RDI + 5) * 100000;
                                ___bzero();
                                local_80._4_4_ = 0;
                                local_80._0_4_ = iVar26 + 1;
                                piVar34 = (int *)(unaff_RDI + 0x3d9);
                                lVar28 = 0;
                                do {
                                  cVar29 = (char)lVar28;
                                  (&DAT_00001e8b + (longlong)unaff_RDI)[lVar28] = cVar29 + -1;
                                  (&DAT_00001e8a + (longlong)unaff_RDI)[lVar28] = cVar29 + -2;
                                  (&DAT_00001e89 + (longlong)unaff_RDI)[lVar28] = cVar29 + -3;
                                  *(char *)((longlong)unaff_RDI + (longlong)(&DAT_00001e88 + lVar28)
                                           ) = cVar29 + -4;
                                  (&DAT_00001e87 + (longlong)unaff_RDI)[lVar28] = cVar29 + -5;
                                  (&DAT_00001e86 + (longlong)unaff_RDI)[lVar28] = cVar29 + -6;
                                  (&DAT_00001e85 + (longlong)unaff_RDI)[lVar28] = cVar29 + -7;
                                  (&DAT_00001e84 + (longlong)unaff_RDI)[lVar28] = cVar29 + -8;
                                  (&DAT_00001e83 + (longlong)unaff_RDI)[lVar28] = cVar29 + -9;
                                  (&DAT_00001e82 + (longlong)unaff_RDI)[lVar28] = cVar29 + -10;
                                  (&DAT_00001e81 + (longlong)unaff_RDI)[lVar28] = cVar29 + -0xb;
                                  *(char *)((longlong)unaff_RDI + (longlong)(&DAT_00001e80 + lVar28)
                                           ) = cVar29 + -0xc;
                                  (&DAT_00001e7f + (longlong)unaff_RDI)[lVar28] = cVar29 + -0xd;
                                  (&DAT_00001e7e + (longlong)unaff_RDI)[lVar28] = cVar29 + -0xe;
                                  (&DAT_00001e7d + (longlong)unaff_RDI)[lVar28] = cVar29 + -0xf;
                                  (&DAT_00001e7c + (longlong)unaff_RDI)[lVar28] = cVar29 + -0x10;
                                  *piVar34 = (int)lVar28 + 0xff0;
                                  lVar28 = lVar28 + -0x10;
                                  piVar34 = piVar34 + -1;
                                } while (lVar28 != -0x100);
                                if ((int)local_88._0_4_ < 1) {
                                  uVar24 = 0xfffffffc;
                                  uVar57 = 0x100;
                                  _local_68 = 0;
                                  iVar53 = 0;
                                  uStack_40 = 0;
                                  uVar19 = (uint)local_38;
                                  pFVar49 = (FILE *)(ulonglong)(uint)auStack_5f._3_4_;
                                  _local_60 = local_88._0_4_;
                                  goto LAB_00ea7aff;
                                }
                                local_90 = (undefined1  [8])
                                           (ulonglong)*(byte *)((longlong)unaff_RDI + 0x1ecc);
                                local_a4 = *(uint *)((longlong)unaff_RDI +
                                                    (longlong)local_90 * 4 + 0xfa0c);
                                lVar28 = (longlong)local_90 * 0x408;
                                local_d8 = (longlong)unaff_RDI + lVar28 + 0xc9ac;
                                local_78 = (undefined1  [8])((longlong)unaff_RDI + lVar28 + 0xe1dc);
                                local_c8 = &UNK_0000b17c + (longlong)unaff_RDI + lVar28;
                                auVar51 = (undefined1  [8])0x100;
                                iVar53 = 0x31;
                                _local_68 = _local_68 & 0xffffffff00000000;
                                local_48 = (ulonglong)local_a4;
                                uStack_40 = 0;
                                pFVar49 = (FILE *)(ulonglong)(uint)auStack_5f._3_4_;
                                auVar50 = local_98;
                                uVar22 = local_88._0_4_;
switchD_00ea4a00_caseD_24:
                                uVar52 = local_48;
                                auStack_5f._3_4_ = SUB84(pFVar49,0);
                                local_48 = CONCAT44(uVar43,(uint)local_48);
                                *(undefined4 *)(unaff_RDI + 1) = 0x24;
                                iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
                                local_88 = auVar51;
                                if (iVar26 < (int)(uint)local_48) {
                                  puVar54 = (undefined8 *)*unaff_RDI;
                                  iVar39 = *(int *)(puVar54 + 1);
                                  do {
                                    iVar39 = iVar39 + -1;
                                    if (iVar39 == -1) {
                                      uVar24 = 0;
                                      uVar19 = (uint)local_38;
                                      goto LAB_00ea67a7;
                                    }
                                    pbVar5 = (byte *)*puVar54;
                                    uVar43 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                                    *(uint *)(unaff_RDI + 4) = uVar43;
                                    iVar26 = iVar26 + 8;
                                    *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                                    *puVar54 = pbVar5 + 1;
                                    *(int *)(puVar54 + 1) = iVar39;
                                    piVar34 = (int *)((longlong)puVar54 + 0xc);
                                    *piVar34 = *piVar34 + 1;
                                    if (*piVar34 == 0) {
                                      *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                    }
                                  } while (iVar26 < (int)(uint)local_48);
                                }
                                else {
                                  uVar43 = *(uint *)(unaff_RDI + 4);
                                }
                                iVar26 = iVar26 - (uint)local_48;
                                uVar19 = ~(-1 << ((byte)uVar52 & 0x1f)) &
                                         uVar43 >> ((byte)iVar26 & 0x1f);
                                *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                                iVar39 = (uint)local_48;
                                while( true ) {
                                  local_38 = (ulonglong)uVar19;
                                  uVar24 = 0xfffffffc;
                                  if (0x14 < iVar39) break;
                                  if ((int)uVar19 <= *(int *)(local_c8 + (longlong)iVar39 * 4)) {
                                    local_48 = CONCAT44(local_48._4_4_,iVar39);
                                    uVar43 = uVar19 - *(int *)(local_d8 + (longlong)iVar39 * 4);
                                    if (0x101 < uVar43) goto LAB_00ea67a7;
                                    local_98 = (undefined1  [8])
                                               (ulonglong)
                                               *(uint *)((longlong)local_78 + (ulonglong)uVar43 * 4)
                                    ;
                                    pFVar49 = (FILE *)(ulonglong)(uint)auStack_5f._3_4_;
                                    auVar51 = local_88;
                                    uVar43 = local_48._4_4_;
                                    goto LAB_00ea6ffe;
                                  }
                                  local_48._0_4_ = iVar39 + 1;
                                  pFVar49 = (FILE *)(ulonglong)(uint)auStack_5f._3_4_;
LAB_00ea6654:
                                  *(undefined4 *)(unaff_RDI + 1) = 0x25;
                                  auStack_5f._3_4_ = SUB84(pFVar49,0);
                                  if (iVar26 < 1) {
                                    puVar54 = (undefined8 *)*unaff_RDI;
                                    iVar39 = *(int *)(puVar54 + 1);
                                    iVar31 = iVar26;
                                    do {
                                      iVar39 = iVar39 + -1;
                                      if (iVar39 == -1) {
                                        uVar24 = 0;
                                        local_98 = auVar50;
                                        goto LAB_00ea6756;
                                      }
                                      pbVar5 = (byte *)*puVar54;
                                      uVar43 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
                                      *(uint *)(unaff_RDI + 4) = uVar43;
                                      iVar26 = iVar31 + 8;
                                      *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                                      *puVar54 = pbVar5 + 1;
                                      *(int *)(puVar54 + 1) = iVar39;
                                      piVar34 = (int *)((longlong)puVar54 + 0xc);
                                      *piVar34 = *piVar34 + 1;
                                      if (*piVar34 == 0) {
                                        *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
                                      }
                                      bVar55 = iVar31 < -7;
                                      iVar31 = iVar26;
                                    } while (bVar55);
                                  }
                                  else {
                                    uVar43 = *(uint *)(unaff_RDI + 4);
                                  }
                                  iVar26 = iVar26 + -1;
                                  local_cc = uVar43 >> ((byte)iVar26 & 0x1f) & 1;
                                  *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
                                  uVar19 = local_cc + (uint)local_38 * 2;
                                  iVar39 = (uint)local_48;
                                }
                                local_48 = CONCAT44(local_48._4_4_,iVar39);
                                local_98 = auVar50;
                                local_38._0_4_ = uVar19;
LAB_00ea6756:
                                uVar19 = (uint)local_38;
                                goto LAB_00ea676a;
                              }
                              uVar24 = 0xfffffffc;
                              uVar22 = 0;
                              goto LAB_00ea68ff;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          local_98 = auVar50;
          local_88 = auVar51;
          _local_60 = uVar22;
          uVar24 = (*(code *)puVar54[7])(uVar19,1);
          unaff_RDI[0x18b] = uVar24;
          lVar28 = (*(code *)puVar54[7])(extraout_XMM0_Qa,1);
          unaff_RDI[0x18c] = lVar28;
          uVar24 = 0xfffffffd;
          uVar43 = local_48._4_4_;
          if (unaff_RDI[0x18b] == 0) {
            uVar19 = (uint)local_38;
            uVar57 = local_88._0_4_;
            pFVar49 = (FILE *)(ulonglong)(uint)auStack_5f._3_4_;
            goto LAB_00ea7aff;
          }
          pFVar49 = (FILE *)(ulonglong)(uint)auStack_5f._3_4_;
          auVar50 = local_98;
          auVar51 = local_88;
          uVar22 = _local_60;
          auVar46 = local_80;
          if (lVar28 != 0) goto switchD_00ea4a00_caseD_e;
        }
      }
    }
  }
  goto LAB_00ea7afb;
LAB_00ea67a7:
  local_98 = auVar50;
LAB_00ea676a:
  pFVar49 = (FILE *)(ulonglong)(uint)auStack_5f._3_4_;
  uVar43 = local_48._4_4_;
  _local_60 = uVar22;
  uVar57 = local_88._0_4_;
  goto LAB_00ea7aff;
LAB_00ea88b5:
  bVar55 = -1 < iVar33;
  iVar33 = iVar26;
  if (bVar55) {
    lVar28 = (longlong)(int)local_68;
    if ((int)local_68 <= local_b4) {
      local_68 = (undefined1  [4])local_b4;
    }
    do {
      if ((int)local_68 == lVar28) goto LAB_00ea890a;
      *(uint *)(unaff_RDI[0x18a] + lVar28 * 4) = (uint)bVar18;
      lVar28 = lVar28 + 1;
      iVar26 = iVar33 + -1;
      bVar55 = 1 < iVar33;
      iVar33 = iVar26;
    } while (bVar55);
    uVar23 = (undefined4)lVar28;
LAB_00ea88f5:
    _local_68 = CONCAT44(auStack_64,uVar23);
    iVar33 = iVar26;
  }
  goto LAB_00ea6ffe;
LAB_00ea890a:
  goto LAB_00ea68ff;
LAB_00ea68fd:
  local_98 = auVar50;
  uVar57 = SUB84(auVar51,0);
  uVar24 = 0;
  goto LAB_00ea68ff;
  while( true ) {
    iVar39 = *(int *)((longlong)unaff_RDI + uVar52 * 4 + 0x454);
    if (iVar39 < iVar26) {
      uVar52 = uVar52 + 3;
      goto LAB_00ea8160;
    }
    iVar26 = *(int *)((longlong)unaff_RDI + uVar52 * 4 + 0x458);
    uVar52 = uVar52 + 4;
    if (iVar26 < iVar39) goto LAB_00ea8160;
    if (uVar52 == 0x100) break;
LAB_00ea7c35:
    iVar39 = *(int *)((longlong)unaff_RDI + uVar52 * 4 + 0x44c);
    local_6c = iVar53;
    if (iVar39 < iVar26) {
      uVar52 = uVar52 + 1;
      goto LAB_00ea8160;
    }
    iVar26 = *(int *)((longlong)unaff_RDI + uVar52 * 4 + 0x450);
    if (iVar26 < iVar39) {
      uVar52 = uVar52 + 2;
      goto LAB_00ea8160;
    }
  }
  *(undefined4 *)(unaff_RDI + 2) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0xc) = 0;
  *(undefined4 *)(unaff_RDI + 0x18e) = 0xffffffff;
  *(undefined4 *)(unaff_RDI + 1) = 2;
  if (1 < *(int *)((longlong)unaff_RDI + 0x34)) {
    _fwrite(*(void **)PTR____stderrp_024a98a0,1,SUB84(local_78,0),pFVar49);
  }
  if (*(char *)((longlong)unaff_RDI + 0x2c) == '\0') {
    lVar28 = unaff_RDI[0x18a];
    if ((int)local_68 < 1) {
      uVar52 = 0;
    }
    else {
      if (local_68 == (undefined1  [4])0x1) {
        uVar35 = 0;
      }
      else {
        uVar43 = 0x100;
        uVar35 = 0;
        do {
          uVar52 = (ulonglong)*(byte *)(lVar28 + uVar35 * 4);
          puVar1 = (uint *)(lVar28 + (longlong)*(int *)((longlong)unaff_RDI + uVar52 * 4 + 0x448) *
                                     4);
          *puVar1 = *puVar1 | uVar43 - 0x100;
          piVar34 = (int *)((longlong)unaff_RDI + uVar52 * 4 + 0x448);
          *piVar34 = *piVar34 + 1;
          uVar52 = (ulonglong)*(byte *)(lVar28 + 4 + uVar35 * 4);
          puVar1 = (uint *)(lVar28 + (longlong)*(int *)((longlong)unaff_RDI + uVar52 * 4 + 0x448) *
                                     4);
          *puVar1 = *puVar1 | uVar43;
          piVar34 = (int *)((longlong)unaff_RDI + uVar52 * 4 + 0x448);
          *piVar34 = *piVar34 + 1;
          uVar35 = uVar35 + 2;
          uVar43 = uVar43 + 0x200;
        } while (((uint)local_68 & 0xfffffffe) != uVar35);
      }
      uVar52 = _local_68 & 0xffffffff;
      if ((_local_68 & 1) != 0) {
        uVar52 = (ulonglong)*(byte *)(lVar28 + uVar35 * 4);
        puVar1 = (uint *)(lVar28 + (longlong)*(int *)((longlong)unaff_RDI + uVar52 * 4 + 0x448) * 4)
        ;
        *puVar1 = *puVar1 | (int)uVar35 << 8;
        piVar34 = (int *)((longlong)unaff_RDI + uVar52 * 4 + 0x448);
        *piVar34 = *piVar34 + 1;
        uVar52 = _local_68 & 0xffffffff;
      }
    }
    uVar43 = *(uint *)(lVar28 + (longlong)*(int *)(unaff_RDI + 7) * 4) >> 8;
    *(uint *)((longlong)unaff_RDI + 0x3c) = uVar43;
    *(undefined4 *)((longlong)unaff_RDI + 0x444) = 0;
    if (*(char *)((longlong)unaff_RDI + 0x14) == '\0') {
      if ((uint)(*(int *)(unaff_RDI + 5) * 100000) <= uVar43) {
        return 1;
      }
      uVar43 = *(uint *)(lVar28 + (ulonglong)uVar43 * 4);
      *(uint *)(unaff_RDI + 8) = uVar43 & 0xff;
      *(uint *)((longlong)unaff_RDI + 0x3c) = uVar43 >> 8;
      *(undefined4 *)((longlong)unaff_RDI + 0x444) = 1;
      uVar24 = 0;
    }
    else {
      unaff_RDI[3] = 0;
      if ((uint)(*(int *)(unaff_RDI + 5) * 100000) <= uVar43) {
        return 1;
      }
      uVar43 = *(uint *)(lVar28 + (ulonglong)uVar43 * 4);
      *(uint *)((longlong)unaff_RDI + 0x3c) = uVar43 >> 8;
      *(undefined4 *)((longlong)unaff_RDI + 0x444) = 1;
      iVar26 = DAT_0278a020;
      *(undefined4 *)((longlong)unaff_RDI + 0x1c) = 1;
      *(int *)(unaff_RDI + 3) = iVar26 + -1;
      *(uint *)(unaff_RDI + 8) = (uint)(iVar26 + -1 == 1) ^ uVar43 & 0xff;
      uVar24 = 0;
    }
  }
  else {
    *(undefined8 *)((longlong)unaff_RDI + 0x84c) = unaff_RDI[0x89];
    *(undefined8 *)((longlong)unaff_RDI + 0x854) = unaff_RDI[0x8a];
    *(undefined8 *)((longlong)unaff_RDI + 0x85c) = unaff_RDI[0x8b];
    *(undefined8 *)((longlong)unaff_RDI + 0x864) = unaff_RDI[0x8c];
    *(undefined8 *)((longlong)unaff_RDI + 0x86c) = unaff_RDI[0x8d];
    *(undefined8 *)((longlong)unaff_RDI + 0x874) = unaff_RDI[0x8e];
    *(undefined8 *)((longlong)unaff_RDI + 0x87c) = unaff_RDI[0x8f];
    *(undefined8 *)((longlong)unaff_RDI + 0x884) = unaff_RDI[0x90];
    *(undefined8 *)((longlong)unaff_RDI + 0x88c) = unaff_RDI[0x91];
    *(undefined8 *)((longlong)unaff_RDI + 0x894) = unaff_RDI[0x92];
    *(undefined8 *)((longlong)unaff_RDI + 0x89c) = unaff_RDI[0x93];
    *(undefined8 *)((longlong)unaff_RDI + 0x8a4) = unaff_RDI[0x94];
    *(undefined8 *)((longlong)unaff_RDI + 0x8ac) = unaff_RDI[0x95];
    *(undefined8 *)((longlong)unaff_RDI + 0x8b4) = unaff_RDI[0x96];
    *(undefined8 *)((longlong)unaff_RDI + 0x8bc) = unaff_RDI[0x97];
    *(undefined8 *)((longlong)unaff_RDI + 0x8c4) = unaff_RDI[0x98];
    *(undefined8 *)((longlong)unaff_RDI + 0x8cc) = unaff_RDI[0x99];
    *(undefined8 *)((longlong)unaff_RDI + 0x8d4) = unaff_RDI[0x9a];
    *(undefined8 *)((longlong)unaff_RDI + 0x8dc) = unaff_RDI[0x9b];
    *(undefined8 *)((longlong)unaff_RDI + 0x8e4) = unaff_RDI[0x9c];
    *(undefined8 *)((longlong)unaff_RDI + 0x8ec) = unaff_RDI[0x9d];
    *(undefined8 *)((longlong)unaff_RDI + 0x8f4) = unaff_RDI[0x9e];
    *(undefined8 *)((longlong)unaff_RDI + 0x8fc) = unaff_RDI[0x9f];
    *(undefined8 *)((longlong)unaff_RDI + 0x904) = unaff_RDI[0xa0];
    *(undefined8 *)((longlong)unaff_RDI + 0x90c) = unaff_RDI[0xa1];
    *(undefined8 *)((longlong)unaff_RDI + 0x914) = unaff_RDI[0xa2];
    *(undefined8 *)((longlong)unaff_RDI + 0x91c) = unaff_RDI[0xa3];
    *(undefined8 *)((longlong)unaff_RDI + 0x924) = unaff_RDI[0xa4];
    *(undefined8 *)((longlong)unaff_RDI + 0x92c) = unaff_RDI[0xa5];
    *(undefined8 *)((longlong)unaff_RDI + 0x934) = unaff_RDI[0xa6];
    *(undefined8 *)((longlong)unaff_RDI + 0x93c) = unaff_RDI[0xa7];
    *(undefined8 *)((longlong)unaff_RDI + 0x944) = unaff_RDI[0xa8];
    *(undefined8 *)((longlong)unaff_RDI + 0x94c) = unaff_RDI[0xa9];
    *(undefined8 *)((longlong)unaff_RDI + 0x954) = unaff_RDI[0xaa];
    *(undefined8 *)((longlong)unaff_RDI + 0x95c) = unaff_RDI[0xab];
    *(undefined8 *)((longlong)unaff_RDI + 0x964) = unaff_RDI[0xac];
    *(undefined8 *)((longlong)unaff_RDI + 0x96c) = unaff_RDI[0xad];
    *(undefined8 *)((longlong)unaff_RDI + 0x974) = unaff_RDI[0xae];
    *(undefined8 *)((longlong)unaff_RDI + 0x97c) = unaff_RDI[0xaf];
    *(undefined8 *)((longlong)unaff_RDI + 0x984) = unaff_RDI[0xb0];
    *(undefined8 *)((longlong)unaff_RDI + 0x98c) = unaff_RDI[0xb1];
    *(undefined8 *)((longlong)unaff_RDI + 0x994) = unaff_RDI[0xb2];
    *(undefined8 *)((longlong)unaff_RDI + 0x99c) = unaff_RDI[0xb3];
    *(undefined8 *)((longlong)unaff_RDI + 0x9a4) = unaff_RDI[0xb4];
    *(undefined8 *)((longlong)unaff_RDI + 0x9ac) = unaff_RDI[0xb5];
    *(undefined8 *)((longlong)unaff_RDI + 0x9b4) = unaff_RDI[0xb6];
    *(undefined8 *)((longlong)unaff_RDI + 0x9bc) = unaff_RDI[0xb7];
    *(undefined8 *)((longlong)unaff_RDI + 0x9c4) = unaff_RDI[0xb8];
    *(undefined8 *)((longlong)unaff_RDI + 0x9cc) = unaff_RDI[0xb9];
    *(undefined8 *)((longlong)unaff_RDI + 0x9d4) = unaff_RDI[0xba];
    *(undefined8 *)((longlong)unaff_RDI + 0x9dc) = unaff_RDI[0xbb];
    *(undefined8 *)((longlong)unaff_RDI + 0x9e4) = unaff_RDI[0xbc];
    *(undefined8 *)((longlong)unaff_RDI + 0x9ec) = unaff_RDI[0xbd];
    *(undefined8 *)((longlong)unaff_RDI + 0x9f4) = unaff_RDI[0xbe];
    *(undefined8 *)((longlong)unaff_RDI + 0x9fc) = unaff_RDI[0xbf];
    *(undefined8 *)((longlong)unaff_RDI + 0xa04) = unaff_RDI[0xc0];
    *(undefined8 *)((longlong)unaff_RDI + 0xa0c) = unaff_RDI[0xc1];
    *(undefined8 *)((longlong)unaff_RDI + 0xa14) = unaff_RDI[0xc2];
    *(undefined8 *)((longlong)unaff_RDI + 0xa1c) = unaff_RDI[0xc3];
    *(undefined8 *)((longlong)unaff_RDI + 0xa24) = unaff_RDI[0xc4];
    *(undefined8 *)((longlong)unaff_RDI + 0xa2c) = unaff_RDI[0xc5];
    *(undefined8 *)((longlong)unaff_RDI + 0xa34) = unaff_RDI[0xc6];
    *(undefined8 *)((longlong)unaff_RDI + 0xa3c) = unaff_RDI[199];
    *(undefined8 *)((longlong)unaff_RDI + 0xa44) = unaff_RDI[200];
    *(undefined8 *)((longlong)unaff_RDI + 0xa4c) = unaff_RDI[0xc9];
    *(undefined8 *)((longlong)unaff_RDI + 0xa54) = unaff_RDI[0xca];
    *(undefined8 *)((longlong)unaff_RDI + 0xa5c) = unaff_RDI[0xcb];
    *(undefined8 *)((longlong)unaff_RDI + 0xa64) = unaff_RDI[0xcc];
    *(undefined8 *)((longlong)unaff_RDI + 0xa6c) = unaff_RDI[0xcd];
    *(undefined8 *)((longlong)unaff_RDI + 0xa74) = unaff_RDI[0xce];
    *(undefined8 *)((longlong)unaff_RDI + 0xa7c) = unaff_RDI[0xcf];
    *(undefined8 *)((longlong)unaff_RDI + 0xa84) = unaff_RDI[0xd0];
    *(undefined8 *)((longlong)unaff_RDI + 0xa8c) = unaff_RDI[0xd1];
    *(undefined8 *)((longlong)unaff_RDI + 0xa94) = unaff_RDI[0xd2];
    *(undefined8 *)((longlong)unaff_RDI + 0xa9c) = unaff_RDI[0xd3];
    *(undefined8 *)((longlong)unaff_RDI + 0xaa4) = unaff_RDI[0xd4];
    *(undefined8 *)((longlong)unaff_RDI + 0xaac) = unaff_RDI[0xd5];
    *(undefined8 *)((longlong)unaff_RDI + 0xab4) = unaff_RDI[0xd6];
    *(undefined8 *)((longlong)unaff_RDI + 0xabc) = unaff_RDI[0xd7];
    *(undefined8 *)((longlong)unaff_RDI + 0xac4) = unaff_RDI[0xd8];
    *(undefined8 *)((longlong)unaff_RDI + 0xacc) = unaff_RDI[0xd9];
    *(undefined8 *)((longlong)unaff_RDI + 0xad4) = unaff_RDI[0xda];
    *(undefined8 *)((longlong)unaff_RDI + 0xadc) = unaff_RDI[0xdb];
    *(undefined8 *)((longlong)unaff_RDI + 0xae4) = unaff_RDI[0xdc];
    *(undefined8 *)((longlong)unaff_RDI + 0xaec) = unaff_RDI[0xdd];
    *(undefined8 *)((longlong)unaff_RDI + 0xaf4) = unaff_RDI[0xde];
    *(undefined8 *)((longlong)unaff_RDI + 0xafc) = unaff_RDI[0xdf];
    *(undefined8 *)((longlong)unaff_RDI + 0xb04) = unaff_RDI[0xe0];
    *(undefined8 *)((longlong)unaff_RDI + 0xb0c) = unaff_RDI[0xe1];
    *(undefined8 *)((longlong)unaff_RDI + 0xb14) = unaff_RDI[0xe2];
    *(undefined8 *)((longlong)unaff_RDI + 0xb1c) = unaff_RDI[0xe3];
    *(undefined8 *)((longlong)unaff_RDI + 0xb24) = unaff_RDI[0xe4];
    *(undefined8 *)((longlong)unaff_RDI + 0xb2c) = unaff_RDI[0xe5];
    *(undefined8 *)((longlong)unaff_RDI + 0xb34) = unaff_RDI[0xe6];
    *(undefined8 *)((longlong)unaff_RDI + 0xb3c) = unaff_RDI[0xe7];
    *(undefined8 *)((longlong)unaff_RDI + 0xb44) = unaff_RDI[0xe8];
    *(undefined8 *)((longlong)unaff_RDI + 0xb4c) = unaff_RDI[0xe9];
    *(undefined8 *)((longlong)unaff_RDI + 0xb54) = unaff_RDI[0xea];
    *(undefined8 *)((longlong)unaff_RDI + 0xb5c) = unaff_RDI[0xeb];
    *(undefined8 *)((longlong)unaff_RDI + 0xb64) = unaff_RDI[0xec];
    *(undefined8 *)((longlong)unaff_RDI + 0xb6c) = unaff_RDI[0xed];
    *(undefined8 *)((longlong)unaff_RDI + 0xb74) = unaff_RDI[0xee];
    *(undefined8 *)((longlong)unaff_RDI + 0xb7c) = unaff_RDI[0xef];
    *(undefined8 *)((longlong)unaff_RDI + 0xb84) = unaff_RDI[0xf0];
    *(undefined8 *)((longlong)unaff_RDI + 0xb8c) = unaff_RDI[0xf1];
    *(undefined8 *)((longlong)unaff_RDI + 0xb94) = unaff_RDI[0xf2];
    *(undefined8 *)((longlong)unaff_RDI + 0xb9c) = unaff_RDI[0xf3];
    *(undefined8 *)((longlong)unaff_RDI + 0xba4) = unaff_RDI[0xf4];
    *(undefined8 *)((longlong)unaff_RDI + 0xbac) = unaff_RDI[0xf5];
    *(undefined8 *)((longlong)unaff_RDI + 0xbb4) = unaff_RDI[0xf6];
    *(undefined8 *)((longlong)unaff_RDI + 0xbbc) = unaff_RDI[0xf7];
    *(undefined8 *)((longlong)unaff_RDI + 0xbc4) = unaff_RDI[0xf8];
    *(undefined8 *)((longlong)unaff_RDI + 0xbcc) = unaff_RDI[0xf9];
    *(undefined8 *)((longlong)unaff_RDI + 0xbd4) = unaff_RDI[0xfa];
    *(undefined8 *)((longlong)unaff_RDI + 0xbdc) = unaff_RDI[0xfb];
    *(undefined8 *)((longlong)unaff_RDI + 0xbe4) = unaff_RDI[0xfc];
    *(undefined8 *)((longlong)unaff_RDI + 0xbec) = unaff_RDI[0xfd];
    *(undefined8 *)((longlong)unaff_RDI + 0xbf4) = unaff_RDI[0xfe];
    *(undefined8 *)((longlong)unaff_RDI + 0xbfc) = unaff_RDI[0xff];
    *(undefined8 *)((longlong)unaff_RDI + 0xc04) = unaff_RDI[0x100];
    *(undefined8 *)((longlong)unaff_RDI + 0xc0c) = unaff_RDI[0x101];
    *(undefined8 *)((longlong)unaff_RDI + 0xc14) = unaff_RDI[0x102];
    *(undefined8 *)((longlong)unaff_RDI + 0xc1c) = unaff_RDI[0x103];
    *(undefined8 *)((longlong)unaff_RDI + 0xc24) = unaff_RDI[0x104];
    *(undefined8 *)((longlong)unaff_RDI + 0xc2c) = unaff_RDI[0x105];
    *(undefined8 *)((longlong)unaff_RDI + 0xc34) = unaff_RDI[0x106];
    *(undefined8 *)((longlong)unaff_RDI + 0xc3c) = unaff_RDI[0x107];
    *(undefined8 *)((longlong)unaff_RDI + 0xc44) = unaff_RDI[0x108];
    *(undefined4 *)((longlong)unaff_RDI + 0xc4c) = *(undefined4 *)(unaff_RDI + 0x109);
    if (0 < (int)local_68) {
      uVar52 = 0;
      do {
        uVar35 = (ulonglong)*(byte *)(unaff_RDI[0x18b] + uVar52 * 2);
        uVar43 = *(uint *)((longlong)unaff_RDI + uVar35 * 4 + 0x84c);
        *(short *)(unaff_RDI[0x18b] + uVar52 * 2) = (short)uVar43;
        uVar45 = uVar52 >> 1 & 0x7fffffff;
        bVar18 = *(byte *)(unaff_RDI[0x18c] + uVar45);
        if ((uVar52 & 1) == 0) {
          bVar18 = bVar18 & 0xf0;
          bVar25 = (byte)(uVar43 >> 0x10);
        }
        else {
          bVar18 = bVar18 & 0xf;
          bVar25 = (byte)(uVar43 >> 0xc) & 0xf0;
        }
        *(byte *)(unaff_RDI[0x18c] + uVar45) = bVar25 | bVar18;
        piVar34 = (int *)((longlong)unaff_RDI + uVar35 * 4 + 0x84c);
        *piVar34 = *piVar34 + 1;
        uVar52 = uVar52 + 1;
      } while ((_local_68 & 0xffffffff) != uVar52);
    }
    iVar26 = *(int *)(unaff_RDI + 7);
    lVar28 = unaff_RDI[0x18b];
    lVar44 = unaff_RDI[0x18c];
    uVar35 = (longlong)iVar26;
    uVar57 = (*(byte *)(lVar44 + (iVar26 >> 1)) >> ((char)iVar26 * '\x04' & 4U) & 0xf) << 0x10 |
             (uint)*(ushort *)(lVar28 + (longlong)iVar26 * 2);
    while( true ) {
      uVar52 = (ulonglong)uVar57;
      uVar45 = (ulonglong)(int)uVar57;
      uVar4 = *(ushort *)(lVar28 + uVar45 * 2);
      lVar38 = (longlong)((int)uVar57 >> 1);
      bVar18 = *(byte *)(lVar44 + lVar38);
      *(short *)(lVar28 + uVar45 * 2) = (short)uVar35;
      if ((uVar45 & 1) == 0) {
        bVar25 = *(byte *)(lVar44 + lVar38) & 0xf0;
        bVar30 = (byte)(uVar35 >> 0x10);
      }
      else {
        bVar25 = *(byte *)(lVar44 + lVar38) & 0xf;
        bVar30 = (byte)((uint)uVar35 >> 0xc) & 0xf0;
      }
      local_70 = (undefined1  [4])
                 ((bVar18 >> ((char)uVar57 * '\x04' & 4U) & 0xf) << 0x10 | (uint)uVar4);
      *(byte *)(lVar44 + lVar38) = bVar30 | bVar25;
      if (uVar57 == *(uint *)(unaff_RDI + 7)) break;
      lVar28 = unaff_RDI[0x18b];
      lVar44 = unaff_RDI[0x18c];
      uVar35 = uVar52;
      uVar57 = (uint)local_70;
    }
    *(uint *)((longlong)unaff_RDI + 0x3c) = uVar57;
    *(undefined4 *)((longlong)unaff_RDI + 0x444) = 0;
    if (*(char *)((longlong)unaff_RDI + 0x14) != '\0') {
      unaff_RDI[3] = 0;
      if ((uint)(*(int *)(unaff_RDI + 5) * 100000) <= uVar57) {
        return 1;
      }
      uVar22 = FUN_00e9ec70();
      *(uint *)(unaff_RDI + 8) = uVar22;
      iVar26 = *(int *)(unaff_RDI + 3);
      uVar43 = *(uint *)((longlong)unaff_RDI + 0x3c);
      *(uint *)((longlong)unaff_RDI + 0x3c) =
           (*(byte *)(unaff_RDI[0x18c] + (ulonglong)(uVar43 >> 1)) >> ((char)uVar43 * '\x04' & 4U) &
           0xf) << 0x10 | (uint)*(ushort *)(unaff_RDI[0x18b] + (ulonglong)uVar43 * 2);
      *(int *)((longlong)unaff_RDI + 0x444) = *(int *)((longlong)unaff_RDI + 0x444) + 1;
      if (iVar26 == 0) {
        iVar26 = (&DAT_0278a020)[*(int *)((longlong)unaff_RDI + 0x1c)];
        iVar39 = *(int *)((longlong)unaff_RDI + 0x1c) + 1;
        iVar53 = 0;
        if (iVar39 != 0x200) {
          iVar53 = iVar39;
        }
        *(int *)((longlong)unaff_RDI + 0x1c) = iVar53;
      }
      *(int *)(unaff_RDI + 3) = iVar26 + -1;
      *(uint *)(unaff_RDI + 8) = uVar22 ^ iVar26 + -1 == 1;
      uVar24 = 0;
      local_80 = (undefined1  [8])((ulonglong)local_98 & 0xffffffff);
      uVar19 = (uint)local_38;
      uVar43 = local_48._4_4_;
      iVar53 = local_6c;
      goto LAB_00ea7aff;
    }
    if ((uint)(*(int *)(unaff_RDI + 5) * 100000) <= uVar57) {
      return 1;
    }
    uVar23 = FUN_00e9ec70();
    *(undefined4 *)(unaff_RDI + 8) = uVar23;
    uVar43 = *(uint *)((longlong)unaff_RDI + 0x3c);
    *(uint *)((longlong)unaff_RDI + 0x3c) =
         (*(byte *)(unaff_RDI[0x18c] + (ulonglong)(uVar43 >> 1)) >> ((char)uVar43 * '\x04' & 4U) &
         0xf) << 0x10 | (uint)*(ushort *)(unaff_RDI[0x18b] + (ulonglong)uVar43 * 2);
    *(int *)((longlong)unaff_RDI + 0x444) = *(int *)((longlong)unaff_RDI + 0x444) + 1;
    uVar24 = 0;
  }
LAB_00ea8160:
  local_80 = (undefined1  [8])((ulonglong)local_98 & 0xffffffff);
  uVar19 = (uint)local_38;
  uVar43 = local_48._4_4_;
  uVar57 = (uint)uVar52;
  iVar53 = local_6c;
  goto LAB_00ea7aff;
LAB_00ea7adf:
  auVar51 = (undefined1  [8])((longlong)auVar51 + 1);
  auVar46 = (undefined1  [8])(ulonglong)local_98;
  goto LAB_00ea7afb;
LAB_00ea7ae5:
  auVar51 = (undefined1  [8])((longlong)auVar51 + 2);
  auVar46 = (undefined1  [8])(ulonglong)local_98;
  goto LAB_00ea7afb;
LAB_00ea7aeb:
  auVar51 = (undefined1  [8])((longlong)auVar51 + 3);
  auVar46 = (undefined1  [8])(ulonglong)local_98;
  goto LAB_00ea7afb;
LAB_00ea6ffe:
  uVar57 = SUB84(auVar51,0);
  uVar41 = SUB84(local_98,0);
  auVar50 = local_98;
  _local_60 = uVar22;
  if (uVar41 != local_80._0_4_) {
    if (uVar41 < 2) {
      iVar33 = -1;
      iVar32 = 1;
      do {
        uVar19 = (uint)local_38;
        uVar57 = SUB84(auVar51,0);
        uVar24 = 0xfffffffc;
        _local_60 = uVar22;
        if (0x1fffff < iVar32) goto LAB_00ea7aff;
        if (SUB84(local_98,0) == 1) {
          iVar26 = iVar32 * 2;
LAB_00ea854b:
          iVar33 = iVar33 + iVar26;
        }
        else {
          iVar26 = iVar32;
          if (SUB84(local_98,0) == 0) goto LAB_00ea854b;
        }
        if (iVar53 == 0) {
          iVar53 = (int)uStack_40;
          uStack_40 = (longlong)iVar53 + 1;
          iVar26 = iVar32 * 2;
          if ((int)uVar22 <= (int)uStack_40) goto LAB_00ea86fe;
          local_90 = (undefined1  [8])
                     (ulonglong)*(byte *)((longlong)unaff_RDI + (longlong)(&DAT_00001ecd + iVar53));
          local_a4 = *(uint *)((longlong)unaff_RDI + (longlong)local_90 * 4 + 0xfa0c);
          local_c8 = &UNK_0000b17c + (longlong)(unaff_RDI + (longlong)local_90 * 0x81);
          local_78 = (undefined1  [8])((longlong)unaff_RDI + (longlong)local_90 * 0x408 + 0xe1dc);
          local_d8 = (longlong)unaff_RDI + (longlong)local_90 * 0x408 + 0xc9ac;
          iVar53 = 0x32;
        }
        iVar32 = iVar32 * 2;
        iVar53 = iVar53 + -1;
        local_48 = (ulonglong)local_a4;
        auVar50 = local_98;
switchD_00ea4a00_caseD_26:
        local_98 = auVar50;
        *(undefined4 *)(unaff_RDI + 1) = 0x26;
        iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
        auStack_5f._3_4_ = SUB84(pFVar49,0);
        if (iVar26 < (int)(uint)local_48) {
          puVar54 = (undefined8 *)*unaff_RDI;
          iVar39 = *(int *)(puVar54 + 1);
          do {
            iVar39 = iVar39 + -1;
            if (iVar39 == -1) {
              uVar24 = 0;
              uVar19 = (uint)local_38;
              _local_60 = uVar22;
              uVar57 = SUB84(auVar51,0);
              goto LAB_00ea7aff;
            }
            pbVar5 = (byte *)*puVar54;
            uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
            *(uint *)(unaff_RDI + 4) = uVar19;
            iVar26 = iVar26 + 8;
            *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
            *puVar54 = pbVar5 + 1;
            *(int *)(puVar54 + 1) = iVar39;
            piVar34 = (int *)((longlong)puVar54 + 0xc);
            *piVar34 = *piVar34 + 1;
            if (*piVar34 == 0) {
              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
            }
          } while (iVar26 < (int)(uint)local_48);
        }
        else {
          uVar19 = *(uint *)(unaff_RDI + 4);
        }
        iVar26 = iVar26 - (uint)local_48;
        uVar19 = ~(-1 << ((byte)local_48 & 0x1f)) & uVar19 >> ((byte)iVar26 & 0x1f);
        *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
        while( true ) {
          local_38 = (ulonglong)uVar19;
          uVar57 = SUB84(auVar51,0);
          uVar24 = 0xfffffffc;
          if (0x14 < (int)(uint)local_48) {
            local_48 = (ulonglong)(uint)local_48;
            _local_60 = uVar22;
            goto LAB_00ea7aff;
          }
          lVar28 = (longlong)(int)(uint)local_48;
          if ((int)uVar19 <= *(int *)(local_c8 + lVar28 * 4)) break;
          local_48 = (ulonglong)((uint)local_48 + 1);
          *(undefined4 *)(unaff_RDI + 1) = 0x27;
          auVar50 = local_98;
          if (iVar26 < 1) {
LAB_00ea4f38:
            puVar54 = (undefined8 *)*unaff_RDI;
            iVar39 = *(int *)(puVar54 + 1);
            iVar31 = iVar26;
            do {
              iVar39 = iVar39 + -1;
              if (iVar39 == -1) goto LAB_00ea68fd;
              pbVar5 = (byte *)*puVar54;
              uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
              *(uint *)(unaff_RDI + 4) = uVar19;
              iVar26 = iVar31 + 8;
              *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
              *puVar54 = pbVar5 + 1;
              *(int *)(puVar54 + 1) = iVar39;
              piVar34 = (int *)((longlong)puVar54 + 0xc);
              *piVar34 = *piVar34 + 1;
              if (*piVar34 == 0) {
                *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
              }
              bVar55 = iVar31 < -7;
              local_98 = auVar50;
              iVar31 = iVar26;
            } while (bVar55);
          }
          else {
LAB_00ea87df:
            uVar19 = *(uint *)(unaff_RDI + 4);
            local_98 = auVar50;
          }
          iVar26 = iVar26 + -1;
          local_cc = uVar19 >> ((byte)iVar26 & 0x1f) & 1;
          *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
          uVar19 = local_cc + (uint)local_38 * 2;
        }
        local_48 = (ulonglong)(uint)local_48;
        uVar19 = uVar19 - *(int *)(local_d8 + lVar28 * 4);
        if (0x101 < uVar19) goto LAB_00ea68ff;
        uVar19 = *(uint *)((longlong)local_78 + (ulonglong)uVar19 * 4);
        local_98 = (undefined1  [8])(ulonglong)uVar19;
      } while (uVar19 < 2);
      iVar26 = iVar33 + 1;
      bVar18 = *(byte *)((longlong)unaff_RDI +
                        (ulonglong)
                        *(byte *)((longlong)unaff_RDI +
                                 (longlong)*(int *)((longlong)unaff_RDI + 0x1e8c) + 0xe8c) + 0xd8c);
      piVar34 = (int *)((longlong)unaff_RDI + (ulonglong)bVar18 * 4 + 0x44);
      *piVar34 = *piVar34 + iVar26;
      if (*(char *)((longlong)unaff_RDI + 0x2c) == '\0') goto LAB_00ea88b5;
      bVar55 = -1 < iVar33;
      iVar33 = iVar26;
      if (bVar55) {
        lVar28 = (longlong)(int)local_68;
        if ((int)local_68 <= local_b4) {
          local_68 = (undefined1  [4])local_b4;
        }
        do {
          if ((int)local_68 == lVar28) goto LAB_00ea890a;
          *(ushort *)(unaff_RDI[0x18b] + lVar28 * 2) = (ushort)bVar18;
          lVar28 = lVar28 + 1;
          iVar26 = iVar33 + -1;
          bVar55 = 1 < iVar33;
          iVar33 = iVar26;
        } while (bVar55);
        uVar23 = (undefined4)lVar28;
        goto LAB_00ea88f5;
      }
    }
    else {
      uVar24 = 0xfffffffc;
      uVar19 = (uint)local_38;
      if (local_b4 <= (int)local_68) goto LAB_00ea7aff;
      uVar41 = uVar41 - 1;
      if (uVar41 < 0x10) {
        iVar26 = *(int *)((longlong)unaff_RDI + 0x1e8c);
        bVar18 = *(byte *)((longlong)unaff_RDI + (ulonglong)(iVar26 + uVar41) + 0xe8c);
        if (uVar41 < 4) {
LAB_00ea7134:
          uVar19 = uVar41;
          if ((uVar41 & 1) != 0) {
            *(undefined1 *)((longlong)unaff_RDI + (ulonglong)(iVar26 + uVar41) + 0xe8c) =
                 *(undefined1 *)((longlong)unaff_RDI + (ulonglong)((iVar26 + uVar41) - 1) + 0xe8c);
            uVar19 = uVar41 - 1;
          }
          if (uVar41 != 1) {
            uVar52 = (ulonglong)(uVar19 + iVar26);
            do {
              uVar35 = (ulonglong)((int)uVar52 - 1);
              *(undefined1 *)((longlong)unaff_RDI + uVar52 + 0xe8c) =
                   *(undefined1 *)((longlong)unaff_RDI + uVar35 + 0xe8c);
              uVar52 = (ulonglong)((int)uVar52 - 2);
              *(undefined1 *)((longlong)unaff_RDI + uVar35 + 0xe8c) =
                   *(undefined1 *)((longlong)unaff_RDI + uVar52 + 0xe8c);
              uVar19 = uVar19 - 2;
            } while (uVar19 != 0);
          }
        }
        else {
          local_48 = CONCAT44(uVar43,(uint)local_48);
          uVar52 = (ulonglong)local_98;
          do {
            iVar39 = (int)uVar52;
            lVar44 = (longlong)(iVar26 + -1 + iVar39 + -1);
            *(undefined1 *)((longlong)unaff_RDI + (longlong)(iVar26 + -1 + iVar39) + 0xe8c) =
                 *(undefined1 *)((longlong)unaff_RDI + lVar44 + 0xe8c);
            lVar28 = (longlong)(iVar26 + -3 + iVar39);
            *(undefined1 *)((longlong)unaff_RDI + lVar44 + 0xe8c) =
                 *(undefined1 *)((longlong)unaff_RDI + lVar28 + 0xe8c);
            lVar44 = (longlong)(iVar26 + -4 + iVar39);
            *(undefined1 *)((longlong)unaff_RDI + lVar28 + 0xe8c) =
                 *(undefined1 *)((longlong)unaff_RDI + lVar44 + 0xe8c);
            *(undefined1 *)((longlong)unaff_RDI + lVar44 + 0xe8c) =
                 *(undefined1 *)((longlong)unaff_RDI + (longlong)(iVar26 + -5 + iVar39) + 0xe8c);
            uVar52 = (ulonglong)(iVar39 - 4U);
          } while (3 < iVar39 - 5U);
          if (iVar39 - 4U != 1) {
            uVar41 = iVar39 - 5;
            goto LAB_00ea7134;
          }
        }
        *(byte *)((longlong)unaff_RDI + (longlong)iVar26 + 0xe8c) = bVar18;
        auStack_5f._3_4_ = (uint)pFVar49;
      }
      else {
        uVar52 = (ulonglong)(uVar41 >> 4);
        iVar26 = *(int *)(&DAT_00001e8c + (longlong)unaff_RDI + uVar52 * 4);
        lVar28 = (longlong)(int)(iVar26 + (uVar41 & 0xf));
        bVar18 = *(byte *)((longlong)unaff_RDI + lVar28 + 0xe8c);
        if ((uVar41 & 0xf) != 0) {
          do {
            *(undefined1 *)((longlong)unaff_RDI + lVar28 + 0xe8c) =
                 *(undefined1 *)((longlong)unaff_RDI + lVar28 + 0xe8b);
            lVar28 = lVar28 + -1;
            iVar26 = *(int *)(&DAT_00001e8c + (longlong)unaff_RDI + uVar52 * 4);
          } while (iVar26 < lVar28);
        }
        *(int *)(&DAT_00001e8c + (longlong)unaff_RDI + uVar52 * 4) = iVar26 + 1;
        do {
          uVar35 = uVar52 - 1;
          iVar26 = *(int *)((longlong)unaff_RDI + (longlong)(&UNK_00001e90 + uVar35 * 4));
          *(int *)((longlong)unaff_RDI + (longlong)(&UNK_00001e90 + uVar35 * 4)) = iVar26 + -1;
          *(undefined1 *)((longlong)unaff_RDI + (longlong)iVar26 + 0xe8b) =
               *(undefined1 *)
                ((longlong)*(int *)(&DAT_00001e8c + (longlong)unaff_RDI + (uVar35 & 0xffffffff) * 4)
                 + 0xe9b + (longlong)unaff_RDI);
          bVar55 = 1 < (longlong)uVar52;
          uVar52 = uVar35;
        } while (bVar55);
        iVar26 = *(int *)((longlong)unaff_RDI + 0x1e8c);
        *(int *)((longlong)unaff_RDI + 0x1e8c) = iVar26 + -1;
        *(byte *)((longlong)unaff_RDI + (longlong)iVar26 + 0xe8b) = bVar18;
        if (*(int *)((longlong)unaff_RDI + 0x1e8c) == 0) {
          iVar26 = 0xff0;
          lVar28 = 0;
          do {
            (&DAT_00001e8b + (longlong)unaff_RDI)[lVar28 * 4] =
                 *(undefined1 *)
                  ((longlong)*(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) +
                   0xe9b + (longlong)unaff_RDI);
            (&DAT_00001e8a + (longlong)unaff_RDI)[lVar28 * 4] =
                 *(undefined1 *)
                  ((longlong)*(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) +
                   0xe9a + (longlong)unaff_RDI);
            (&DAT_00001e89 + (longlong)unaff_RDI)[lVar28 * 4] =
                 *(undefined1 *)
                  ((longlong)*(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) +
                   0xe99 + (longlong)unaff_RDI);
            *(undefined1 *)((longlong)unaff_RDI + (longlong)(&DAT_00001e88 + lVar28 * 4)) =
                 *(undefined1 *)
                  ((longlong)*(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) +
                   0xe98 + (longlong)unaff_RDI);
            (&DAT_00001e87 + (longlong)unaff_RDI)[lVar28 * 4] =
                 *(undefined1 *)
                  ((longlong)*(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) +
                   0xe97 + (longlong)unaff_RDI);
            (&DAT_00001e86 + (longlong)unaff_RDI)[lVar28 * 4] =
                 *(undefined1 *)
                  ((longlong)*(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) +
                   0xe96 + (longlong)unaff_RDI);
            (&DAT_00001e85 + (longlong)unaff_RDI)[lVar28 * 4] =
                 *(undefined1 *)
                  ((longlong)*(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) +
                   0xe95 + (longlong)unaff_RDI);
            (&DAT_00001e84 + (longlong)unaff_RDI)[lVar28 * 4] =
                 *(undefined1 *)
                  ((longlong)*(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) +
                   0xe94 + (longlong)unaff_RDI);
            (&DAT_00001e83 + (longlong)unaff_RDI)[lVar28 * 4] =
                 *(undefined1 *)
                  ((longlong)*(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) +
                   0xe93 + (longlong)unaff_RDI);
            (&DAT_00001e82 + (longlong)unaff_RDI)[lVar28 * 4] =
                 *(undefined1 *)
                  ((longlong)*(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) +
                   0xe92 + (longlong)unaff_RDI);
            (&DAT_00001e81 + (longlong)unaff_RDI)[lVar28 * 4] =
                 *(undefined1 *)
                  ((longlong)*(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) +
                   0xe91 + (longlong)unaff_RDI);
            *(undefined1 *)((longlong)unaff_RDI + (longlong)(&DAT_00001e80 + lVar28 * 4)) =
                 *(undefined1 *)
                  ((longlong)*(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) +
                   0xe90 + (longlong)unaff_RDI);
            (&DAT_00001e7f + (longlong)unaff_RDI)[lVar28 * 4] =
                 *(undefined1 *)
                  ((longlong)*(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) +
                   0xe8f + (longlong)unaff_RDI);
            (&DAT_00001e7e + (longlong)unaff_RDI)[lVar28 * 4] =
                 *(undefined1 *)
                  ((longlong)*(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) +
                   0xe8e + (longlong)unaff_RDI);
            (&DAT_00001e7d + (longlong)unaff_RDI)[lVar28 * 4] =
                 *(undefined1 *)
                  ((longlong)*(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) +
                   0xe8d + (longlong)unaff_RDI);
            (&DAT_00001e7c + (longlong)unaff_RDI)[lVar28 * 4] =
                 *(undefined1 *)
                  ((longlong)unaff_RDI +
                  (longlong)*(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) +
                  0xe8c);
            *(int *)((longlong)unaff_RDI + (longlong)(&DAT_00001ec8 + lVar28)) = iVar26;
            lVar28 = lVar28 + -4;
            iVar26 = iVar26 + -0x10;
          } while (lVar28 != -0x40);
        }
      }
      piVar34 = (int *)((longlong)unaff_RDI +
                       (ulonglong)*(byte *)((longlong)unaff_RDI + (ulonglong)bVar18 + 0xd8c) * 4 +
                       0x44);
      *piVar34 = *piVar34 + 1;
      bVar18 = *(byte *)((longlong)unaff_RDI + (ulonglong)bVar18 + 0xd8c);
      if (*(char *)((longlong)unaff_RDI + 0x2c) == '\0') {
        *(uint *)(unaff_RDI[0x18a] + (longlong)(int)local_68 * 4) = (uint)bVar18;
      }
      else {
        *(ushort *)(unaff_RDI[0x18b] + (longlong)(int)local_68 * 2) = (ushort)bVar18;
      }
      _local_68 = CONCAT44(auStack_64,(int)local_68 + 1);
      if (iVar53 == 0) {
        iVar53 = (int)uStack_40;
        uStack_40 = (longlong)iVar53 + 1;
        iVar26 = iVar32;
        if ((int)uVar22 <= (int)uStack_40) {
LAB_00ea86fe:
          iVar32 = iVar26;
          uVar19 = (uint)local_38;
          uVar24 = 0xfffffffc;
          _local_60 = uVar22;
          iVar53 = 0;
          goto LAB_00ea7aff;
        }
        local_90 = (undefined1  [8])
                   (ulonglong)*(byte *)((longlong)unaff_RDI + (longlong)(&DAT_00001ecd + iVar53));
        local_a4 = *(uint *)((longlong)unaff_RDI + (longlong)local_90 * 4 + 0xfa0c);
        local_c8 = &UNK_0000b17c + (longlong)(unaff_RDI + (longlong)local_90 * 0x81);
        local_78 = (undefined1  [8])((longlong)unaff_RDI + (longlong)local_90 * 0x408 + 0xe1dc);
        local_d8 = (longlong)unaff_RDI + (longlong)local_90 * 0x408 + 0xc9ac;
        iVar53 = 0x32;
      }
      iVar53 = iVar53 + -1;
      local_48 = (ulonglong)local_a4;
switchD_00ea4a00_caseD_28:
      *(undefined4 *)(unaff_RDI + 1) = 0x28;
      iVar26 = *(int *)((longlong)unaff_RDI + 0x24);
      if (iVar26 < (int)(uint)local_48) {
        puVar54 = (undefined8 *)*unaff_RDI;
        iVar39 = *(int *)(puVar54 + 1);
        do {
          iVar39 = iVar39 + -1;
          if (iVar39 == -1) goto LAB_00ea68fd;
          pbVar5 = (byte *)*puVar54;
          uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
          *(uint *)(unaff_RDI + 4) = uVar19;
          iVar26 = iVar26 + 8;
          *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
          *puVar54 = pbVar5 + 1;
          *(int *)(puVar54 + 1) = iVar39;
          piVar34 = (int *)((longlong)puVar54 + 0xc);
          *piVar34 = *piVar34 + 1;
          if (*piVar34 == 0) {
            *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
          }
        } while (iVar26 < (int)(uint)local_48);
      }
      else {
        uVar19 = *(uint *)(unaff_RDI + 4);
      }
      iVar26 = iVar26 - (uint)local_48;
      uVar19 = ~(-1 << ((byte)local_48 & 0x1f)) & uVar19 >> ((byte)iVar26 & 0x1f);
      *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
      local_98 = auVar50;
      while( true ) {
        local_38 = (ulonglong)uVar19;
        uVar57 = SUB84(auVar51,0);
        uVar24 = 0xfffffffc;
        if (0x14 < (int)(uint)local_48) {
          local_48 = (ulonglong)(uint)local_48;
          _local_60 = uVar22;
          goto LAB_00ea7aff;
        }
        lVar28 = (longlong)(int)(uint)local_48;
        if ((int)uVar19 <= *(int *)(local_c8 + lVar28 * 4)) break;
        local_48 = (ulonglong)((uint)local_48 + 1);
        *(undefined4 *)(unaff_RDI + 1) = 0x29;
        if (iVar26 < 1) {
LAB_00ea4fac:
          puVar54 = (undefined8 *)*unaff_RDI;
          iVar39 = *(int *)(puVar54 + 1);
          iVar31 = iVar26;
          do {
            iVar39 = iVar39 + -1;
            auVar50 = local_98;
            if (iVar39 == -1) goto LAB_00ea68fd;
            pbVar5 = (byte *)*puVar54;
            uVar19 = (uint)*pbVar5 | *(int *)(unaff_RDI + 4) << 8;
            *(uint *)(unaff_RDI + 4) = uVar19;
            iVar26 = iVar31 + 8;
            *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
            *puVar54 = pbVar5 + 1;
            *(int *)(puVar54 + 1) = iVar39;
            piVar34 = (int *)((longlong)puVar54 + 0xc);
            *piVar34 = *piVar34 + 1;
            if (*piVar34 == 0) {
              *(int *)(puVar54 + 2) = *(int *)(puVar54 + 2) + 1;
            }
            bVar55 = iVar31 < -7;
            iVar31 = iVar26;
          } while (bVar55);
        }
        else {
LAB_00ea8740:
          uVar19 = *(uint *)(unaff_RDI + 4);
        }
        iVar26 = iVar26 + -1;
        local_cc = uVar19 >> ((byte)iVar26 & 0x1f) & 1;
        *(int *)((longlong)unaff_RDI + 0x24) = iVar26;
        uVar19 = local_cc + (uint)local_38 * 2;
      }
      local_48 = (ulonglong)(uint)local_48;
      uVar19 = uVar19 - *(int *)(local_d8 + lVar28 * 4);
      if (0x101 < uVar19) goto LAB_00ea68ff;
      local_98 = (undefined1  [8])(ulonglong)*(uint *)((longlong)local_78 + (ulonglong)uVar19 * 4);
    }
    goto LAB_00ea6ffe;
  }
  uVar24 = 0xfffffffc;
  auVar46 = (undefined1  [8])(ulonglong)local_98;
  if ((-1 < *(int *)(unaff_RDI + 7)) &&
     (auVar46 = (undefined1  [8])(ulonglong)local_98, *(int *)(unaff_RDI + 7) < (int)local_68)) {
    auVar51 = (undefined1  [8])0x0;
    do {
      iVar26 = *(int *)((longlong)unaff_RDI + (longlong)auVar51 * 4 + 0x44);
      auVar46 = (undefined1  [8])(ulonglong)local_98;
      if ((iVar26 < 0) || (auVar46 = (undefined1  [8])(ulonglong)local_98, (int)local_68 < iVar26))
      goto LAB_00ea7afb;
      iVar26 = *(int *)((longlong)unaff_RDI + (longlong)auVar51 * 4 + 0x48);
      if ((iVar26 < 0) || ((int)local_68 < iVar26)) goto LAB_00ea7adf;
      iVar26 = *(int *)((longlong)unaff_RDI + (longlong)auVar51 * 4 + 0x4c);
      if ((iVar26 < 0) || ((int)local_68 < iVar26)) goto LAB_00ea7ae5;
      iVar26 = *(int *)((longlong)unaff_RDI + (longlong)auVar51 * 4 + 0x50);
      if ((iVar26 < 0) || ((int)local_68 < iVar26)) goto LAB_00ea7aeb;
      auVar51 = (undefined1  [8])((longlong)auVar51 + 4);
    } while (auVar51 != (undefined1  [8])0x100);
    local_80 = (undefined1  [8])(unaff_RDI + 0x89);
    *(undefined4 *)(unaff_RDI + 0x89) = 0;
    *(undefined8 *)((longlong)unaff_RDI + 0x44c) = *(undefined8 *)((longlong)unaff_RDI + 0x44);
    *(undefined8 *)((longlong)unaff_RDI + 0x454) = *(undefined8 *)((longlong)unaff_RDI + 0x4c);
    *(undefined8 *)((longlong)unaff_RDI + 0x45c) = *(undefined8 *)((longlong)unaff_RDI + 0x54);
    *(undefined8 *)((longlong)unaff_RDI + 0x464) = *(undefined8 *)((longlong)unaff_RDI + 0x5c);
    *(undefined8 *)((longlong)unaff_RDI + 0x46c) = *(undefined8 *)((longlong)unaff_RDI + 100);
    *(undefined8 *)((longlong)unaff_RDI + 0x474) = *(undefined8 *)((longlong)unaff_RDI + 0x6c);
    *(undefined8 *)((longlong)unaff_RDI + 0x47c) = *(undefined8 *)((longlong)unaff_RDI + 0x74);
    *(undefined8 *)((longlong)unaff_RDI + 0x484) = *(undefined8 *)((longlong)unaff_RDI + 0x7c);
    *(undefined8 *)((longlong)unaff_RDI + 0x48c) = *(undefined8 *)((longlong)unaff_RDI + 0x84);
    *(undefined8 *)((longlong)unaff_RDI + 0x494) = *(undefined8 *)((longlong)unaff_RDI + 0x8c);
    *(undefined8 *)((longlong)unaff_RDI + 0x49c) = *(undefined8 *)((longlong)unaff_RDI + 0x94);
    *(undefined8 *)((longlong)unaff_RDI + 0x4a4) = *(undefined8 *)((longlong)unaff_RDI + 0x9c);
    *(undefined8 *)((longlong)unaff_RDI + 0x4ac) = *(undefined8 *)((longlong)unaff_RDI + 0xa4);
    *(undefined8 *)((longlong)unaff_RDI + 0x4b4) = *(undefined8 *)((longlong)unaff_RDI + 0xac);
    *(undefined8 *)((longlong)unaff_RDI + 0x4bc) = *(undefined8 *)((longlong)unaff_RDI + 0xb4);
    *(undefined8 *)((longlong)unaff_RDI + 0x4c4) = *(undefined8 *)((longlong)unaff_RDI + 0xbc);
    *(undefined8 *)((longlong)unaff_RDI + 0x4cc) = *(undefined8 *)((longlong)unaff_RDI + 0xc4);
    *(undefined8 *)((longlong)unaff_RDI + 0x4d4) = *(undefined8 *)((longlong)unaff_RDI + 0xcc);
    *(undefined8 *)((longlong)unaff_RDI + 0x4dc) = *(undefined8 *)((longlong)unaff_RDI + 0xd4);
    *(undefined8 *)((longlong)unaff_RDI + 0x4e4) = *(undefined8 *)((longlong)unaff_RDI + 0xdc);
    *(undefined8 *)((longlong)unaff_RDI + 0x4ec) = *(undefined8 *)((longlong)unaff_RDI + 0xe4);
    *(undefined8 *)((longlong)unaff_RDI + 0x4f4) = *(undefined8 *)((longlong)unaff_RDI + 0xec);
    *(undefined8 *)((longlong)unaff_RDI + 0x4fc) = *(undefined8 *)((longlong)unaff_RDI + 0xf4);
    *(undefined8 *)((longlong)unaff_RDI + 0x504) = *(undefined8 *)((longlong)unaff_RDI + 0xfc);
    *(undefined8 *)((longlong)unaff_RDI + 0x50c) = *(undefined8 *)((longlong)unaff_RDI + 0x104);
    *(undefined8 *)((longlong)unaff_RDI + 0x514) = *(undefined8 *)((longlong)unaff_RDI + 0x10c);
    *(undefined8 *)((longlong)unaff_RDI + 0x51c) = *(undefined8 *)((longlong)unaff_RDI + 0x114);
    *(undefined8 *)((longlong)unaff_RDI + 0x524) = *(undefined8 *)((longlong)unaff_RDI + 0x11c);
    *(undefined8 *)((longlong)unaff_RDI + 0x52c) = *(undefined8 *)((longlong)unaff_RDI + 0x124);
    *(undefined8 *)((longlong)unaff_RDI + 0x534) = *(undefined8 *)((longlong)unaff_RDI + 300);
    *(undefined8 *)((longlong)unaff_RDI + 0x53c) = *(undefined8 *)((longlong)unaff_RDI + 0x134);
    *(undefined8 *)((longlong)unaff_RDI + 0x544) = *(undefined8 *)((longlong)unaff_RDI + 0x13c);
    *(undefined8 *)((longlong)unaff_RDI + 0x54c) = *(undefined8 *)((longlong)unaff_RDI + 0x144);
    *(undefined8 *)((longlong)unaff_RDI + 0x554) = *(undefined8 *)((longlong)unaff_RDI + 0x14c);
    *(undefined8 *)((longlong)unaff_RDI + 0x55c) = *(undefined8 *)((longlong)unaff_RDI + 0x154);
    *(undefined8 *)((longlong)unaff_RDI + 0x564) = *(undefined8 *)((longlong)unaff_RDI + 0x15c);
    *(undefined8 *)((longlong)unaff_RDI + 0x56c) = *(undefined8 *)((longlong)unaff_RDI + 0x164);
    *(undefined8 *)((longlong)unaff_RDI + 0x574) = *(undefined8 *)((longlong)unaff_RDI + 0x16c);
    *(undefined8 *)((longlong)unaff_RDI + 0x57c) = *(undefined8 *)((longlong)unaff_RDI + 0x174);
    *(undefined8 *)((longlong)unaff_RDI + 0x584) = *(undefined8 *)((longlong)unaff_RDI + 0x17c);
    *(undefined8 *)((longlong)unaff_RDI + 0x58c) = *(undefined8 *)((longlong)unaff_RDI + 0x184);
    *(undefined8 *)((longlong)unaff_RDI + 0x594) = *(undefined8 *)((longlong)unaff_RDI + 0x18c);
    *(undefined8 *)((longlong)unaff_RDI + 0x59c) = *(undefined8 *)((longlong)unaff_RDI + 0x194);
    *(undefined8 *)((longlong)unaff_RDI + 0x5a4) = *(undefined8 *)((longlong)unaff_RDI + 0x19c);
    *(undefined8 *)((longlong)unaff_RDI + 0x5ac) = *(undefined8 *)((longlong)unaff_RDI + 0x1a4);
    *(undefined8 *)((longlong)unaff_RDI + 0x5b4) = *(undefined8 *)((longlong)unaff_RDI + 0x1ac);
    *(undefined8 *)((longlong)unaff_RDI + 0x5bc) = *(undefined8 *)((longlong)unaff_RDI + 0x1b4);
    *(undefined8 *)((longlong)unaff_RDI + 0x5c4) = *(undefined8 *)((longlong)unaff_RDI + 0x1bc);
    *(undefined8 *)((longlong)unaff_RDI + 0x5cc) = *(undefined8 *)((longlong)unaff_RDI + 0x1c4);
    *(undefined8 *)((longlong)unaff_RDI + 0x5d4) = *(undefined8 *)((longlong)unaff_RDI + 0x1cc);
    *(undefined8 *)((longlong)unaff_RDI + 0x5dc) = *(undefined8 *)((longlong)unaff_RDI + 0x1d4);
    *(undefined8 *)((longlong)unaff_RDI + 0x5e4) = *(undefined8 *)((longlong)unaff_RDI + 0x1dc);
    *(undefined8 *)((longlong)unaff_RDI + 0x5ec) = *(undefined8 *)((longlong)unaff_RDI + 0x1e4);
    *(undefined8 *)((longlong)unaff_RDI + 0x5f4) = *(undefined8 *)((longlong)unaff_RDI + 0x1ec);
    *(undefined8 *)((longlong)unaff_RDI + 0x5fc) = *(undefined8 *)((longlong)unaff_RDI + 500);
    *(undefined8 *)((longlong)unaff_RDI + 0x604) = *(undefined8 *)((longlong)unaff_RDI + 0x1fc);
    *(undefined8 *)((longlong)unaff_RDI + 0x60c) = *(undefined8 *)((longlong)unaff_RDI + 0x204);
    *(undefined8 *)((longlong)unaff_RDI + 0x614) = *(undefined8 *)((longlong)unaff_RDI + 0x20c);
    *(undefined8 *)((longlong)unaff_RDI + 0x61c) = *(undefined8 *)((longlong)unaff_RDI + 0x214);
    *(undefined8 *)((longlong)unaff_RDI + 0x624) = *(undefined8 *)((longlong)unaff_RDI + 0x21c);
    *(undefined8 *)((longlong)unaff_RDI + 0x62c) = *(undefined8 *)((longlong)unaff_RDI + 0x224);
    *(undefined8 *)((longlong)unaff_RDI + 0x634) = *(undefined8 *)((longlong)unaff_RDI + 0x22c);
    *(undefined8 *)((longlong)unaff_RDI + 0x63c) = *(undefined8 *)((longlong)unaff_RDI + 0x234);
    *(undefined8 *)((longlong)unaff_RDI + 0x644) = *(undefined8 *)((longlong)unaff_RDI + 0x23c);
    *(undefined8 *)((longlong)unaff_RDI + 0x64c) = *(undefined8 *)((longlong)unaff_RDI + 0x244);
    *(undefined8 *)((longlong)unaff_RDI + 0x654) = *(undefined8 *)((longlong)unaff_RDI + 0x24c);
    *(undefined8 *)((longlong)unaff_RDI + 0x65c) = *(undefined8 *)((longlong)unaff_RDI + 0x254);
    *(undefined8 *)((longlong)unaff_RDI + 0x664) = *(undefined8 *)((longlong)unaff_RDI + 0x25c);
    *(undefined8 *)((longlong)unaff_RDI + 0x66c) = *(undefined8 *)((longlong)unaff_RDI + 0x264);
    *(undefined8 *)((longlong)unaff_RDI + 0x674) = *(undefined8 *)((longlong)unaff_RDI + 0x26c);
    *(undefined8 *)((longlong)unaff_RDI + 0x67c) = *(undefined8 *)((longlong)unaff_RDI + 0x274);
    *(undefined8 *)((longlong)unaff_RDI + 0x684) = *(undefined8 *)((longlong)unaff_RDI + 0x27c);
    *(undefined8 *)((longlong)unaff_RDI + 0x68c) = *(undefined8 *)((longlong)unaff_RDI + 0x284);
    *(undefined8 *)((longlong)unaff_RDI + 0x694) = *(undefined8 *)((longlong)unaff_RDI + 0x28c);
    *(undefined8 *)((longlong)unaff_RDI + 0x69c) = *(undefined8 *)((longlong)unaff_RDI + 0x294);
    *(undefined8 *)((longlong)unaff_RDI + 0x6a4) = *(undefined8 *)((longlong)unaff_RDI + 0x29c);
    *(undefined8 *)((longlong)unaff_RDI + 0x6ac) = *(undefined8 *)((longlong)unaff_RDI + 0x2a4);
    *(undefined8 *)((longlong)unaff_RDI + 0x6b4) = *(undefined8 *)((longlong)unaff_RDI + 0x2ac);
    *(undefined8 *)((longlong)unaff_RDI + 0x6bc) = *(undefined8 *)((longlong)unaff_RDI + 0x2b4);
    *(undefined8 *)((longlong)unaff_RDI + 0x6c4) = *(undefined8 *)((longlong)unaff_RDI + 700);
    *(undefined8 *)((longlong)unaff_RDI + 0x6cc) = *(undefined8 *)((longlong)unaff_RDI + 0x2c4);
    *(undefined8 *)((longlong)unaff_RDI + 0x6d4) = *(undefined8 *)((longlong)unaff_RDI + 0x2cc);
    *(undefined8 *)((longlong)unaff_RDI + 0x6dc) = *(undefined8 *)((longlong)unaff_RDI + 0x2d4);
    *(undefined8 *)((longlong)unaff_RDI + 0x6e4) = *(undefined8 *)((longlong)unaff_RDI + 0x2dc);
    *(undefined8 *)((longlong)unaff_RDI + 0x6ec) = *(undefined8 *)((longlong)unaff_RDI + 0x2e4);
    *(undefined8 *)((longlong)unaff_RDI + 0x6f4) = *(undefined8 *)((longlong)unaff_RDI + 0x2ec);
    *(undefined8 *)((longlong)unaff_RDI + 0x6fc) = *(undefined8 *)((longlong)unaff_RDI + 0x2f4);
    *(undefined8 *)((longlong)unaff_RDI + 0x704) = *(undefined8 *)((longlong)unaff_RDI + 0x2fc);
    *(undefined8 *)((longlong)unaff_RDI + 0x70c) = *(undefined8 *)((longlong)unaff_RDI + 0x304);
    *(undefined8 *)((longlong)unaff_RDI + 0x714) = *(undefined8 *)((longlong)unaff_RDI + 0x30c);
    *(undefined8 *)((longlong)unaff_RDI + 0x71c) = *(undefined8 *)((longlong)unaff_RDI + 0x314);
    *(undefined8 *)((longlong)unaff_RDI + 0x724) = *(undefined8 *)((longlong)unaff_RDI + 0x31c);
    *(undefined8 *)((longlong)unaff_RDI + 0x72c) = *(undefined8 *)((longlong)unaff_RDI + 0x324);
    *(undefined8 *)((longlong)unaff_RDI + 0x734) = *(undefined8 *)((longlong)unaff_RDI + 0x32c);
    *(undefined8 *)((longlong)unaff_RDI + 0x73c) = *(undefined8 *)((longlong)unaff_RDI + 0x334);
    *(undefined8 *)((longlong)unaff_RDI + 0x744) = *(undefined8 *)((longlong)unaff_RDI + 0x33c);
    *(undefined8 *)((longlong)unaff_RDI + 0x74c) = *(undefined8 *)((longlong)unaff_RDI + 0x344);
    *(undefined8 *)((longlong)unaff_RDI + 0x754) = *(undefined8 *)((longlong)unaff_RDI + 0x34c);
    *(undefined8 *)((longlong)unaff_RDI + 0x75c) = *(undefined8 *)((longlong)unaff_RDI + 0x354);
    *(undefined8 *)((longlong)unaff_RDI + 0x764) = *(undefined8 *)((longlong)unaff_RDI + 0x35c);
    *(undefined8 *)((longlong)unaff_RDI + 0x76c) = *(undefined8 *)((longlong)unaff_RDI + 0x364);
    *(undefined8 *)((longlong)unaff_RDI + 0x774) = *(undefined8 *)((longlong)unaff_RDI + 0x36c);
    *(undefined8 *)((longlong)unaff_RDI + 0x77c) = *(undefined8 *)((longlong)unaff_RDI + 0x374);
    *(undefined8 *)((longlong)unaff_RDI + 0x784) = *(undefined8 *)((longlong)unaff_RDI + 0x37c);
    *(undefined8 *)((longlong)unaff_RDI + 0x78c) = *(undefined8 *)((longlong)unaff_RDI + 900);
    *(undefined8 *)((longlong)unaff_RDI + 0x794) = *(undefined8 *)((longlong)unaff_RDI + 0x38c);
    *(undefined8 *)((longlong)unaff_RDI + 0x79c) = *(undefined8 *)((longlong)unaff_RDI + 0x394);
    *(undefined8 *)((longlong)unaff_RDI + 0x7a4) = *(undefined8 *)((longlong)unaff_RDI + 0x39c);
    *(undefined8 *)((longlong)unaff_RDI + 0x7ac) = *(undefined8 *)((longlong)unaff_RDI + 0x3a4);
    *(undefined8 *)((longlong)unaff_RDI + 0x7b4) = *(undefined8 *)((longlong)unaff_RDI + 0x3ac);
    *(undefined8 *)((longlong)unaff_RDI + 0x7bc) = *(undefined8 *)((longlong)unaff_RDI + 0x3b4);
    *(undefined8 *)((longlong)unaff_RDI + 0x7c4) = *(undefined8 *)((longlong)unaff_RDI + 0x3bc);
    *(undefined8 *)((longlong)unaff_RDI + 0x7cc) = *(undefined8 *)((longlong)unaff_RDI + 0x3c4);
    *(undefined8 *)((longlong)unaff_RDI + 0x7d4) = *(undefined8 *)((longlong)unaff_RDI + 0x3cc);
    *(undefined8 *)((longlong)unaff_RDI + 0x7dc) = *(undefined8 *)((longlong)unaff_RDI + 0x3d4);
    *(undefined8 *)((longlong)unaff_RDI + 0x7e4) = *(undefined8 *)((longlong)unaff_RDI + 0x3dc);
    *(undefined8 *)((longlong)unaff_RDI + 0x7ec) = *(undefined8 *)((longlong)unaff_RDI + 0x3e4);
    *(undefined8 *)((longlong)unaff_RDI + 0x7f4) = *(undefined8 *)((longlong)unaff_RDI + 0x3ec);
    *(undefined8 *)((longlong)unaff_RDI + 0x7fc) = *(undefined8 *)((longlong)unaff_RDI + 0x3f4);
    *(undefined8 *)((longlong)unaff_RDI + 0x804) = *(undefined8 *)((longlong)unaff_RDI + 0x3fc);
    *(undefined8 *)((longlong)unaff_RDI + 0x80c) = *(undefined8 *)((longlong)unaff_RDI + 0x404);
    *(undefined8 *)((longlong)unaff_RDI + 0x814) = *(undefined8 *)((longlong)unaff_RDI + 0x40c);
    *(undefined8 *)((longlong)unaff_RDI + 0x81c) = *(undefined8 *)((longlong)unaff_RDI + 0x414);
    *(undefined8 *)((longlong)unaff_RDI + 0x824) = *(undefined8 *)((longlong)unaff_RDI + 0x41c);
    *(undefined8 *)((longlong)unaff_RDI + 0x82c) = *(undefined8 *)((longlong)unaff_RDI + 0x424);
    *(undefined8 *)((longlong)unaff_RDI + 0x834) = *(undefined8 *)((longlong)unaff_RDI + 0x42c);
    *(undefined8 *)((longlong)unaff_RDI + 0x83c) = *(undefined8 *)((longlong)unaff_RDI + 0x434);
    *(undefined8 *)((longlong)unaff_RDI + 0x844) = *(undefined8 *)((longlong)unaff_RDI + 0x43c);
    lVar28 = 0;
    iVar26 = 0;
    do {
      iVar26 = iVar26 + *(int *)((longlong)unaff_RDI + lVar28 * 4 + 0x44c);
      *(int *)((longlong)unaff_RDI + lVar28 * 4 + 0x44c) = iVar26;
      iVar26 = iVar26 + *(int *)((longlong)unaff_RDI + lVar28 * 4 + 0x450);
      *(int *)((longlong)unaff_RDI + lVar28 * 4 + 0x450) = iVar26;
      iVar26 = iVar26 + *(int *)((longlong)unaff_RDI + lVar28 * 4 + 0x454);
      *(int *)((longlong)unaff_RDI + lVar28 * 4 + 0x454) = iVar26;
      iVar26 = iVar26 + *(int *)((longlong)unaff_RDI + lVar28 * 4 + 0x458);
      *(int *)((longlong)unaff_RDI + lVar28 * 4 + 0x458) = iVar26;
      lVar28 = lVar28 + 4;
    } while (lVar28 != 0x100);
    if ((int)local_68 < 0) {
      auVar51 = (undefined1  [8])0;
      auVar46 = (undefined1  [8])(ulonglong)local_98;
    }
    else {
      auVar51 = (undefined1  [8])0x0;
      do {
        if (auVar51 == (undefined1  [8])0x100) {
          local_48 = CONCAT44(uVar43,(uint)local_48);
          uVar52 = 0;
          iVar26 = 0;
          goto LAB_00ea7c35;
        }
        iVar26 = *(int *)((longlong)unaff_RDI + (longlong)auVar51 * 4 + 0x44c);
        if ((iVar26 < 0) || ((int)local_68 < iVar26)) goto LAB_00ea7adf;
        iVar26 = *(int *)((longlong)unaff_RDI + (longlong)auVar51 * 4 + 0x450);
        if ((iVar26 < 0) || ((int)local_68 < iVar26)) goto LAB_00ea7ae5;
        iVar26 = *(int *)((longlong)unaff_RDI + (longlong)auVar51 * 4 + 0x454);
        if ((iVar26 < 0) || ((int)local_68 < iVar26)) goto LAB_00ea7aeb;
        iVar26 = *(int *)((longlong)unaff_RDI + (longlong)auVar51 * 4 + 0x458);
        auVar51 = (undefined1  [8])((longlong)auVar51 + 4);
        auVar46 = (undefined1  [8])(ulonglong)local_98;
      } while ((-1 < iVar26) &&
              (auVar46 = (undefined1  [8])(ulonglong)local_98, iVar26 <= (int)local_68));
    }
  }
LAB_00ea7afb:
  local_80 = auVar46;
  local_98 = auVar50;
  _local_60 = uVar22;
  uVar57 = SUB84(auVar51,0);
  uVar19 = (uint)local_38;
LAB_00ea7aff:
  *(uint *)((longlong)unaff_RDI + 0xfa24) = uVar57;
  *(undefined1 (*) [4])(unaff_RDI + 0x1f45) = local_70;
  *(uint *)((longlong)unaff_RDI + 0xfa2c) = uVar56;
  *(uint *)(unaff_RDI + 0x1f46) = uVar43;
  *(uint *)((longlong)unaff_RDI + 0xfa34) = uVar40;
  *(uint *)(unaff_RDI + 0x1f47) = _local_60;
  *(undefined4 *)((longlong)unaff_RDI + 0xfa3c) = local_80._0_4_;
  *(int *)(unaff_RDI + 0x1f48) = (int)uStack_40;
  *(int *)((longlong)unaff_RDI + 0xfa44) = iVar53;
  *(int *)(unaff_RDI + 0x1f49) = SUB84(local_98,0);
  *(int *)((longlong)unaff_RDI + 0xfa4c) = local_b4;
  *(undefined1 (*) [4])(unaff_RDI + 0x1f4a) = local_68;
  *(int *)((longlong)unaff_RDI + 0xfa54) = iVar33;
  *(int *)(unaff_RDI + 0x1f4b) = iVar32;
  *(uint *)((longlong)unaff_RDI + 0xfa5c) = uVar20;
  *(int *)(unaff_RDI + 0x1f4c) = (int)pFVar49;
  *(uint *)((longlong)unaff_RDI + 0xfa64) = (uint)local_48;
  *(uint *)(unaff_RDI + 0x1f4d) = uVar19;
  *(uint *)((longlong)unaff_RDI + 0xfa6c) = local_cc;
  *(int *)(unaff_RDI + 0x1f4e) = local_90._0_4_;
  *(uint *)((longlong)unaff_RDI + 0xfa74) = local_a4;
  unaff_RDI[0x1f4f] = local_c8;
  unaff_RDI[0x1f50] = local_d8;
  unaff_RDI[0x1f51] = local_78;
  return uVar24;
}


