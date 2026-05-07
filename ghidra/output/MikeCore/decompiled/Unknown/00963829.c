// Function: FUN_00963829
// Address: 00963829
// Size: 2953 bytes
// Class: Unknown


void FUN_00963829(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint *unaff_RSI;
  uint uVar16;
  uint *unaff_RDI;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_34;
  
  uVar4 = *unaff_RDI;
  local_48 = unaff_RDI[1];
  local_70 = unaff_RDI[2];
  uVar16 = unaff_RDI[3];
  local_6c = unaff_RDI[4];
  local_68 = unaff_RDI[5];
  local_64 = unaff_RDI[6];
  uVar17 = unaff_RDI[7];
  local_60 = unaff_RDI[8];
  local_5c = unaff_RDI[9];
  local_44 = unaff_RDI[10];
  local_40 = unaff_RDI[0xb];
  local_58 = unaff_RDI[0xc];
  local_54 = unaff_RDI[0xd];
  local_3c = unaff_RDI[0xe];
  local_34 = unaff_RDI[0xf];
  uVar1 = unaff_RSI[2];
  uVar2 = unaff_RSI[4];
  iVar23 = 0;
  uVar10 = *unaff_RSI;
  uVar11 = unaff_RSI[1];
  uVar12 = unaff_RSI[3];
  uVar19 = unaff_RSI[5];
  local_50 = uVar1;
  local_4c = uVar2;
  do {
    if (iVar23 != 0) {
      uVar21 = uVar4 - (local_3c ^ 0xa5a5a5a5);
      uVar3 = (local_48 - (local_34 ^ 0xa5a5a5a5)) - (uint)(uVar4 < (local_3c ^ 0xa5a5a5a5));
      uVar15 = local_70 ^ uVar21;
      uVar16 = uVar16 ^ uVar3;
      local_68 = local_68 + uVar16 + (uint)CARRY4(local_6c,uVar15);
      uVar4 = uVar15 << 0x13 ^ local_6c + uVar15 ^ 0xfff80000;
      uVar20 = local_64 - uVar4;
      uVar17 = (uVar17 - (local_64 < uVar4)) + 1 + ((uVar16 << 0x13 | uVar15 >> 0xd) ^ local_68);
      uVar25 = local_60 ^ uVar20;
      local_5c = local_5c ^ uVar17;
      local_40 = local_40 + local_5c + (uint)CARRY4(local_44,uVar25);
      uVar4 = local_44 + uVar25 ^ 0xffffffff ^ (local_5c << 9 | uVar25 >> 0x17);
      uVar18 = local_58 - uVar4;
      uVar22 = (local_54 - (local_5c >> 0x17 ^ 0x1ff ^ local_40)) - (uint)(local_58 < uVar4);
      uVar8 = local_3c ^ uVar18;
      local_34 = local_34 ^ uVar22;
      uVar4 = uVar21 + uVar8;
      local_48 = uVar3 + local_34 + (uint)CARRY4(uVar21,uVar8);
      uVar3 = uVar8 << 0x13 ^ uVar4 ^ 0xfff80000;
      local_70 = uVar15 - uVar3;
      uVar16 = (uVar16 - (uVar15 < uVar3)) + 1 + ((local_34 << 0x13 | uVar8 >> 0xd) ^ local_48);
      local_6c = local_6c + uVar15 ^ local_70;
      local_68 = local_68 ^ uVar16;
      local_64 = uVar20 + local_6c;
      uVar17 = uVar17 + local_68 + (uint)CARRY4(uVar20,local_6c);
      uVar3 = local_64 ^ 0xffffffff ^ (local_68 << 9 | local_6c >> 0x17);
      local_60 = uVar25 - uVar3;
      local_5c = (local_5c - (local_68 >> 0x17 ^ 0x1ff ^ uVar17)) - (uint)(uVar25 < uVar3);
      local_44 = local_44 + uVar25 ^ local_60;
      local_40 = local_40 ^ local_5c;
      local_58 = uVar18 + local_44;
      local_54 = uVar22 + local_40 + (uint)CARRY4(uVar18,local_44);
      local_3c = uVar8 - (local_58 ^ 0x89abcdef);
      local_34 = (local_34 - (uVar8 < (local_58 ^ 0x89abcdef))) - (local_54 ^ 0x1234567);
    }
    local_4c = local_4c ^ uVar4;
    uVar9 = (ulonglong)(local_4c >> 0x10 & 0xff);
    uVar19 = uVar19 ^ local_48;
    uVar5 = (ulonglong)(uVar19 >> 0x10 & 0xff);
    uVar3 = *(uint *)(&DAT_023bfc90 + uVar9 * 8) ^
            *(uint *)(&DAT_023bf490 + (ulonglong)(local_4c & 0xff) * 8) ^
            *(uint *)(&DAT_023c0490 + (ulonglong)(uVar19 & 0xff) * 8) ^
            *(uint *)(&DAT_023c0c90 + uVar5 * 8);
    uVar6 = (ulonglong)(local_4c >> 8 & 0xff);
    uVar7 = (ulonglong)(uVar19 >> 8 & 0xff);
    uVar8 = *(uint *)(&DAT_023c0490 + (ulonglong)(local_4c >> 0x18) * 8) ^
            *(uint *)(&DAT_023c0c90 + uVar6 * 8) ^ *(uint *)(&DAT_023bfc90 + uVar7 * 8) ^
            *(uint *)(&DAT_023bf490 + (ulonglong)(uVar19 >> 0x18) * 8);
    uVar15 = uVar8 + local_50;
    iVar24 = (*(uint *)(&DAT_023c0494 + (ulonglong)(local_4c >> 0x18) * 8) ^
              *(uint *)(&DAT_023c0c94 + uVar6 * 8) ^ *(uint *)(&DAT_023bfc94 + uVar7 * 8) ^
             *(uint *)(&DAT_023bf494 + (ulonglong)(uVar19 >> 0x18) * 8)) + uVar12 +
             (uint)CARRY4(uVar8,local_50);
    if (iVar23 == 0) {
      uVar12 = uVar15 * 5;
      iVar24 = iVar24 + (uint)(uVar12 < uVar15 * 4) + (iVar24 * 4 | uVar15 >> 0x1e);
    }
    else {
      uVar8 = iVar24 * 8 | uVar15 >> 0x1d;
      if (iVar23 == 1) {
        uVar12 = uVar15 * 7;
        iVar24 = (-iVar24 - (uint)(uVar15 * 8 < uVar15)) + uVar8;
      }
      else {
        uVar12 = uVar15 * 9;
        iVar24 = iVar24 + (uint)(uVar12 < uVar15 * 8) + uVar8;
      }
    }
    uVar8 = uVar10 - uVar3 ^ local_70;
    uVar13 = (ulonglong)(uVar8 >> 0x10 & 0xff);
    uVar15 = (uVar11 - (*(uint *)(&DAT_023bfc94 + uVar9 * 8) ^
                        *(uint *)(&DAT_023bf494 + (ulonglong)(local_4c & 0xff) * 8) ^
                        *(uint *)(&DAT_023c0494 + (ulonglong)(uVar19 & 0xff) * 8) ^
                       *(uint *)(&DAT_023c0c94 + uVar5 * 8))) - (uint)(uVar10 < uVar3) ^ uVar16;
    uVar5 = (ulonglong)(uVar15 >> 0x10 & 0xff);
    uVar3 = *(uint *)(&DAT_023bfc90 + uVar13 * 8) ^
            *(uint *)(&DAT_023bf490 + (ulonglong)(uVar8 & 0xff) * 8) ^
            *(uint *)(&DAT_023c0490 + (ulonglong)(uVar15 & 0xff) * 8) ^
            *(uint *)(&DAT_023c0c90 + uVar5 * 8);
    uVar6 = (ulonglong)(uVar8 >> 8 & 0xff);
    uVar7 = (ulonglong)(uVar15 >> 8 & 0xff);
    uVar10 = *(uint *)(&DAT_023c0490 + (ulonglong)(uVar8 >> 0x18) * 8) ^
             *(uint *)(&DAT_023c0c90 + uVar6 * 8) ^ *(uint *)(&DAT_023bfc90 + uVar7 * 8) ^
             *(uint *)(&DAT_023bf490 + (ulonglong)(uVar15 >> 0x18) * 8);
    uVar11 = uVar10 + local_4c;
    iVar14 = (*(uint *)(&DAT_023c0494 + (ulonglong)(uVar8 >> 0x18) * 8) ^
              *(uint *)(&DAT_023c0c94 + uVar6 * 8) ^ *(uint *)(&DAT_023bfc94 + uVar7 * 8) ^
             *(uint *)(&DAT_023bf494 + (ulonglong)(uVar15 >> 0x18) * 8)) + uVar19 +
             (uint)CARRY4(uVar10,local_4c);
    if (iVar23 == 0) {
      uVar10 = uVar11 * 5;
      iVar14 = iVar14 + (uint)(uVar10 < uVar11 * 4) + (iVar14 * 4 | uVar11 >> 0x1e);
    }
    else {
      uVar19 = iVar14 * 8 | uVar11 >> 0x1d;
      if (iVar23 == 1) {
        uVar10 = uVar11 * 7;
        iVar14 = (-iVar14 - (uint)(uVar11 * 8 < uVar11)) + uVar19;
      }
      else {
        uVar10 = uVar11 * 9;
        iVar14 = iVar14 + (uint)(uVar10 < uVar11 * 8) + uVar19;
      }
    }
    uVar18 = uVar12 - uVar3 ^ local_6c;
    uVar9 = (ulonglong)(uVar18 >> 0x10 & 0xff);
    uVar3 = (iVar24 - (*(uint *)(&DAT_023bfc94 + uVar13 * 8) ^
                       *(uint *)(&DAT_023bf494 + (ulonglong)(uVar8 & 0xff) * 8) ^
                       *(uint *)(&DAT_023c0494 + (ulonglong)(uVar15 & 0xff) * 8) ^
                      *(uint *)(&DAT_023c0c94 + uVar5 * 8))) - (uint)(uVar12 < uVar3) ^ local_68;
    uVar5 = (ulonglong)(uVar3 >> 0x10 & 0xff);
    uVar19 = *(uint *)(&DAT_023bfc90 + uVar9 * 8) ^
             *(uint *)(&DAT_023bf490 + (ulonglong)(uVar18 & 0xff) * 8) ^
             *(uint *)(&DAT_023c0490 + (ulonglong)(uVar3 & 0xff) * 8) ^
             *(uint *)(&DAT_023c0c90 + uVar5 * 8);
    uVar6 = (ulonglong)(uVar18 >> 8 & 0xff);
    uVar7 = (ulonglong)(uVar3 >> 8 & 0xff);
    uVar11 = *(uint *)(&DAT_023c0490 + (ulonglong)(uVar18 >> 0x18) * 8) ^
             *(uint *)(&DAT_023c0c90 + uVar6 * 8) ^ *(uint *)(&DAT_023bfc90 + uVar7 * 8) ^
             *(uint *)(&DAT_023bf490 + (ulonglong)(uVar3 >> 0x18) * 8);
    uVar12 = uVar11 + uVar8;
    iVar24 = (*(uint *)(&DAT_023c0494 + (ulonglong)(uVar18 >> 0x18) * 8) ^
              *(uint *)(&DAT_023c0c94 + uVar6 * 8) ^ *(uint *)(&DAT_023bfc94 + uVar7 * 8) ^
             *(uint *)(&DAT_023bf494 + (ulonglong)(uVar3 >> 0x18) * 8)) + uVar15 +
             (uint)CARRY4(uVar11,uVar8);
    if (iVar23 == 0) {
      uVar11 = uVar12 * 5;
      iVar24 = iVar24 + (uint)(uVar11 < uVar12 * 4) + (iVar24 * 4 | uVar12 >> 0x1e);
    }
    else {
      uVar8 = iVar24 * 8 | uVar12 >> 0x1d;
      if (iVar23 == 1) {
        uVar11 = uVar12 * 7;
        iVar24 = (-iVar24 - (uint)(uVar12 * 8 < uVar12)) + uVar8;
      }
      else {
        uVar11 = uVar12 * 9;
        iVar24 = iVar24 + (uint)(uVar11 < uVar12 * 8) + uVar8;
      }
    }
    uVar15 = uVar10 - uVar19 ^ local_64;
    uVar6 = (ulonglong)(uVar15 >> 0x10 & 0xff);
    uVar19 = (iVar14 - (*(uint *)(&DAT_023bfc94 + uVar9 * 8) ^
                        *(uint *)(&DAT_023bf494 + (ulonglong)(uVar18 & 0xff) * 8) ^
                        *(uint *)(&DAT_023c0494 + (ulonglong)(uVar3 & 0xff) * 8) ^
                       *(uint *)(&DAT_023c0c94 + uVar5 * 8))) - (uint)(uVar10 < uVar19) ^ uVar17;
    uVar5 = (ulonglong)(uVar19 >> 0x10 & 0xff);
    uVar8 = *(uint *)(&DAT_023bfc90 + uVar6 * 8) ^
            *(uint *)(&DAT_023bf490 + (ulonglong)(uVar15 & 0xff) * 8) ^
            *(uint *)(&DAT_023c0490 + (ulonglong)(uVar19 & 0xff) * 8) ^
            *(uint *)(&DAT_023c0c90 + uVar5 * 8);
    uVar7 = (ulonglong)(uVar15 >> 8 & 0xff);
    uVar9 = (ulonglong)(uVar19 >> 8 & 0xff);
    uVar10 = *(uint *)(&DAT_023c0490 + (ulonglong)(uVar15 >> 0x18) * 8) ^
             *(uint *)(&DAT_023c0c90 + uVar7 * 8) ^ *(uint *)(&DAT_023bfc90 + uVar9 * 8) ^
             *(uint *)(&DAT_023bf490 + (ulonglong)(uVar19 >> 0x18) * 8);
    uVar12 = uVar10 + uVar18;
    iVar14 = (*(uint *)(&DAT_023c0494 + (ulonglong)(uVar15 >> 0x18) * 8) ^
              *(uint *)(&DAT_023c0c94 + uVar7 * 8) ^ *(uint *)(&DAT_023bfc94 + uVar9 * 8) ^
             *(uint *)(&DAT_023bf494 + (ulonglong)(uVar19 >> 0x18) * 8)) + uVar3 +
             (uint)CARRY4(uVar10,uVar18);
    if (iVar23 == 0) {
      uVar10 = uVar12 * 5;
      iVar14 = iVar14 + (uint)(uVar10 < uVar12 * 4) + (iVar14 * 4 | uVar12 >> 0x1e);
    }
    else {
      uVar3 = iVar14 * 8 | uVar12 >> 0x1d;
      if (iVar23 == 1) {
        uVar10 = uVar12 * 7;
        iVar14 = (-iVar14 - (uint)(uVar12 * 8 < uVar12)) + uVar3;
      }
      else {
        uVar10 = uVar12 * 9;
        iVar14 = iVar14 + (uint)(uVar10 < uVar12 * 8) + uVar3;
      }
    }
    uVar18 = uVar11 - uVar8 ^ local_60;
    uVar7 = (ulonglong)(uVar18 >> 0x10 & 0xff);
    uVar3 = (iVar24 - (*(uint *)(&DAT_023bfc94 + uVar6 * 8) ^
                       *(uint *)(&DAT_023bf494 + (ulonglong)(uVar15 & 0xff) * 8) ^
                       *(uint *)(&DAT_023c0494 + (ulonglong)(uVar19 & 0xff) * 8) ^
                      *(uint *)(&DAT_023c0c94 + uVar5 * 8))) - (uint)(uVar11 < uVar8) ^ local_5c;
    uVar5 = (ulonglong)(uVar3 >> 0x10 & 0xff);
    uVar8 = *(uint *)(&DAT_023bfc90 + uVar7 * 8) ^
            *(uint *)(&DAT_023bf490 + (ulonglong)(uVar18 & 0xff) * 8) ^
            *(uint *)(&DAT_023c0490 + (ulonglong)(uVar3 & 0xff) * 8) ^
            *(uint *)(&DAT_023c0c90 + uVar5 * 8);
    uVar6 = (ulonglong)(uVar18 >> 8 & 0xff);
    uVar9 = (ulonglong)(uVar3 >> 8 & 0xff);
    uVar11 = *(uint *)(&DAT_023c0490 + (ulonglong)(uVar18 >> 0x18) * 8) ^
             *(uint *)(&DAT_023c0c90 + uVar6 * 8) ^ *(uint *)(&DAT_023bfc90 + uVar9 * 8) ^
             *(uint *)(&DAT_023bf490 + (ulonglong)(uVar3 >> 0x18) * 8);
    uVar12 = uVar11 + uVar15;
    iVar24 = (*(uint *)(&DAT_023c0494 + (ulonglong)(uVar18 >> 0x18) * 8) ^
              *(uint *)(&DAT_023c0c94 + uVar6 * 8) ^ *(uint *)(&DAT_023bfc94 + uVar9 * 8) ^
             *(uint *)(&DAT_023bf494 + (ulonglong)(uVar3 >> 0x18) * 8)) + uVar19 +
             (uint)CARRY4(uVar11,uVar15);
    if (iVar23 == 0) {
      uVar11 = uVar12 * 5;
      iVar24 = iVar24 + (uint)(uVar11 < uVar12 * 4) + (iVar24 * 4 | uVar12 >> 0x1e);
    }
    else {
      uVar19 = iVar24 * 8 | uVar12 >> 0x1d;
      if (iVar23 == 1) {
        uVar11 = uVar12 * 7;
        iVar24 = (-iVar24 - (uint)(uVar12 * 8 < uVar12)) + uVar19;
      }
      else {
        uVar11 = uVar12 * 9;
        iVar24 = iVar24 + (uint)(uVar11 < uVar12 * 8) + uVar19;
      }
    }
    uVar15 = uVar10 - uVar8 ^ local_44;
    uVar6 = (ulonglong)(uVar15 >> 0x10 & 0xff);
    uVar19 = (iVar14 - (*(uint *)(&DAT_023bfc94 + uVar7 * 8) ^
                        *(uint *)(&DAT_023bf494 + (ulonglong)(uVar18 & 0xff) * 8) ^
                        *(uint *)(&DAT_023c0494 + (ulonglong)(uVar3 & 0xff) * 8) ^
                       *(uint *)(&DAT_023c0c94 + uVar5 * 8))) - (uint)(uVar10 < uVar8) ^ local_40;
    uVar5 = (ulonglong)(uVar19 >> 0x10 & 0xff);
    uVar8 = *(uint *)(&DAT_023bfc90 + uVar6 * 8) ^
            *(uint *)(&DAT_023bf490 + (ulonglong)(uVar15 & 0xff) * 8) ^
            *(uint *)(&DAT_023c0490 + (ulonglong)(uVar19 & 0xff) * 8) ^
            *(uint *)(&DAT_023c0c90 + uVar5 * 8);
    uVar7 = (ulonglong)(uVar15 >> 8 & 0xff);
    uVar9 = (ulonglong)(uVar19 >> 8 & 0xff);
    uVar10 = *(uint *)(&DAT_023c0490 + (ulonglong)(uVar15 >> 0x18) * 8) ^
             *(uint *)(&DAT_023c0c90 + uVar7 * 8) ^ *(uint *)(&DAT_023bfc90 + uVar9 * 8) ^
             *(uint *)(&DAT_023bf490 + (ulonglong)(uVar19 >> 0x18) * 8);
    uVar12 = uVar10 + uVar18;
    iVar14 = (*(uint *)(&DAT_023c0494 + (ulonglong)(uVar15 >> 0x18) * 8) ^
              *(uint *)(&DAT_023c0c94 + uVar7 * 8) ^ *(uint *)(&DAT_023bfc94 + uVar9 * 8) ^
             *(uint *)(&DAT_023bf494 + (ulonglong)(uVar19 >> 0x18) * 8)) + uVar3 +
             (uint)CARRY4(uVar10,uVar18);
    if (iVar23 == 0) {
      uVar10 = uVar12 * 5;
      iVar14 = iVar14 + (uint)(uVar10 < uVar12 * 4) + (iVar14 * 4 | uVar12 >> 0x1e);
    }
    else {
      uVar3 = iVar14 * 8 | uVar12 >> 0x1d;
      if (iVar23 == 1) {
        uVar10 = uVar12 * 7;
        iVar14 = (-iVar14 - (uint)(uVar12 * 8 < uVar12)) + uVar3;
      }
      else {
        uVar10 = uVar12 * 9;
        iVar14 = iVar14 + (uint)(uVar10 < uVar12 * 8) + uVar3;
      }
    }
    uVar18 = uVar11 - uVar8 ^ local_58;
    uVar7 = (ulonglong)(uVar18 >> 0x10 & 0xff);
    uVar8 = (iVar24 - (*(uint *)(&DAT_023bfc94 + uVar6 * 8) ^
                       *(uint *)(&DAT_023bf494 + (ulonglong)(uVar15 & 0xff) * 8) ^
                       *(uint *)(&DAT_023c0494 + (ulonglong)(uVar19 & 0xff) * 8) ^
                      *(uint *)(&DAT_023c0c94 + uVar5 * 8))) - (uint)(uVar11 < uVar8) ^ local_54;
    uVar5 = (ulonglong)(uVar8 >> 0x10 & 0xff);
    uVar3 = *(uint *)(&DAT_023bfc90 + uVar7 * 8) ^
            *(uint *)(&DAT_023bf490 + (ulonglong)(uVar18 & 0xff) * 8) ^
            *(uint *)(&DAT_023c0490 + (ulonglong)(uVar8 & 0xff) * 8) ^
            *(uint *)(&DAT_023c0c90 + uVar5 * 8);
    uVar6 = (ulonglong)(uVar18 >> 8 & 0xff);
    uVar9 = (ulonglong)(uVar8 >> 8 & 0xff);
    uVar11 = *(uint *)(&DAT_023c0490 + (ulonglong)(uVar18 >> 0x18) * 8) ^
             *(uint *)(&DAT_023c0c90 + uVar6 * 8) ^ *(uint *)(&DAT_023bfc90 + uVar9 * 8) ^
             *(uint *)(&DAT_023bf490 + (ulonglong)(uVar8 >> 0x18) * 8);
    uVar12 = uVar11 + uVar15;
    iVar24 = (*(uint *)(&DAT_023c0494 + (ulonglong)(uVar18 >> 0x18) * 8) ^
              *(uint *)(&DAT_023c0c94 + uVar6 * 8) ^ *(uint *)(&DAT_023bfc94 + uVar9 * 8) ^
             *(uint *)(&DAT_023bf494 + (ulonglong)(uVar8 >> 0x18) * 8)) + uVar19 +
             (uint)CARRY4(uVar11,uVar15);
    if (iVar23 == 0) {
      uVar11 = uVar12 * 5;
      iVar24 = iVar24 + (uint)(uVar11 < uVar12 * 4) + (iVar24 * 4 | uVar12 >> 0x1e);
    }
    else {
      uVar19 = iVar24 * 8 | uVar12 >> 0x1d;
      if (iVar23 == 1) {
        uVar11 = uVar12 * 7;
        iVar24 = (-iVar24 - (uint)(uVar12 * 8 < uVar12)) + uVar19;
      }
      else {
        uVar11 = uVar12 * 9;
        iVar24 = iVar24 + (uint)(uVar11 < uVar12 * 8) + uVar19;
      }
    }
    local_50 = uVar10 - uVar3 ^ local_3c;
    uVar6 = (ulonglong)(local_50 >> 0x10 & 0xff);
    uVar12 = (iVar14 - (*(uint *)(&DAT_023bfc94 + uVar7 * 8) ^
                        *(uint *)(&DAT_023bf494 + (ulonglong)(uVar18 & 0xff) * 8) ^
                        *(uint *)(&DAT_023c0494 + (ulonglong)(uVar8 & 0xff) * 8) ^
                       *(uint *)(&DAT_023c0c94 + uVar5 * 8))) - (uint)(uVar10 < uVar3) ^ local_34;
    uVar5 = (ulonglong)(uVar12 >> 0x10 & 0xff);
    uVar10 = *(uint *)(&DAT_023bfc90 + uVar6 * 8) ^
             *(uint *)(&DAT_023bf490 + (ulonglong)(local_50 & 0xff) * 8) ^
             *(uint *)(&DAT_023c0490 + (ulonglong)(uVar12 & 0xff) * 8) ^
             *(uint *)(&DAT_023c0c90 + uVar5 * 8);
    local_4c = uVar11 - uVar10;
    uVar19 = (iVar24 - (*(uint *)(&DAT_023bfc94 + uVar6 * 8) ^
                        *(uint *)(&DAT_023bf494 + (ulonglong)(local_50 & 0xff) * 8) ^
                        *(uint *)(&DAT_023c0494 + (ulonglong)(uVar12 & 0xff) * 8) ^
                       *(uint *)(&DAT_023c0c94 + uVar5 * 8))) - (uint)(uVar11 < uVar10);
    uVar5 = (ulonglong)(local_50 >> 8 & 0xff);
    uVar6 = (ulonglong)(uVar12 >> 8 & 0xff);
    uVar10 = *(uint *)(&DAT_023c0490 + (ulonglong)(local_50 >> 0x18) * 8) ^
             *(uint *)(&DAT_023c0c90 + uVar5 * 8) ^ *(uint *)(&DAT_023bfc90 + uVar6 * 8) ^
             *(uint *)(&DAT_023bf490 + (ulonglong)(uVar12 >> 0x18) * 8);
    uVar3 = uVar10 + uVar18;
    iVar24 = (*(uint *)(&DAT_023c0494 + (ulonglong)(local_50 >> 0x18) * 8) ^
              *(uint *)(&DAT_023c0c94 + uVar5 * 8) ^ *(uint *)(&DAT_023bfc94 + uVar6 * 8) ^
             *(uint *)(&DAT_023bf494 + (ulonglong)(uVar12 >> 0x18) * 8)) + uVar8 +
             (uint)CARRY4(uVar10,uVar18);
    if (iVar23 == 0) {
      uVar10 = uVar3 * 5;
      uVar11 = iVar24 + (uint)(uVar10 < uVar3 * 4) + (iVar24 * 4 | uVar3 >> 0x1e);
    }
    else {
      uVar11 = iVar24 * 8 | uVar3 >> 0x1d;
      if (iVar23 == 1) {
        uVar10 = uVar3 * 7;
        uVar11 = (-iVar24 - (uint)(uVar3 * 8 < uVar3)) + uVar11;
      }
      else {
        uVar10 = uVar3 * 9;
        uVar11 = iVar24 + (uint)(uVar10 < uVar3 * 8) + uVar11;
      }
    }
    iVar23 = iVar23 + 1;
  } while (iVar23 != 3);
  *unaff_RSI = uVar10 ^ *unaff_RSI;
  unaff_RSI[1] = uVar11 ^ unaff_RSI[1];
  unaff_RSI[2] = local_50 - uVar1;
  unaff_RSI[3] = (uVar12 - unaff_RSI[3]) - (uint)(local_50 < uVar1);
  unaff_RSI[4] = local_4c + uVar2;
  unaff_RSI[5] = uVar19 + unaff_RSI[5] + (uint)CARRY4(local_4c,uVar2);
  return;
}


