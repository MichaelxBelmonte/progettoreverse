// Function: FUN_00959b2f
// Address: 00959b2f
// Size: 4741 bytes
// Class: Unknown


void FUN_00959b2f(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *unaff_RSI;
  uint uVar12;
  uint uVar13;
  uint *unaff_RDI;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  longlong local_d0;
  uint local_a0;
  uint local_9c [10];
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_58 = (uint)*(undefined8 *)unaff_RDI;
  uStack_54 = (uint)((ulonglong)*(undefined8 *)unaff_RDI >> 0x20);
  local_9c[9] = (uint)*(undefined8 *)unaff_RSI;
  uStack_74 = (uint)((ulonglong)*(undefined8 *)unaff_RSI >> 0x20);
  uStack_50 = (uint)*(undefined8 *)(unaff_RDI + 2);
  uStack_70 = (uint)*(undefined8 *)(unaff_RSI + 2);
  uStack_4c = (uint)((ulonglong)*(undefined8 *)(unaff_RDI + 2) >> 0x20);
  uStack_6c = (uint)((ulonglong)*(undefined8 *)(unaff_RSI + 2) >> 0x20);
  local_48 = (uint)*(undefined8 *)(unaff_RDI + 4);
  uStack_44 = (uint)((ulonglong)*(undefined8 *)(unaff_RDI + 4) >> 0x20);
  local_a0 = uStack_44;
  uStack_40 = (uint)*(undefined8 *)(unaff_RDI + 6);
  uStack_3c = (uint)((ulonglong)*(undefined8 *)(unaff_RDI + 6) >> 0x20);
  local_9c[0] = uStack_3c;
  local_d0 = 1;
  uVar2 = local_9c[9];
  uVar4 = unaff_RSI[4];
  uVar3 = unaff_RSI[5];
  uVar5 = unaff_RSI[6];
  uVar1 = unaff_RSI[7];
  while( true ) {
    uVar11 = uVar1;
    uVar1 = uVar2 ^ local_58;
    uVar24 = uStack_74 ^ uStack_54;
    uVar7 = uStack_70 ^ uStack_50;
    uVar9 = uVar4 ^ local_48;
    uVar14 = uVar5 ^ uStack_40;
    uVar6 = uVar14 << 0x18 | (uVar9 & 0xff) << 0x10 | (uVar7 & 0xff) << 8 | uVar1 & 0xff;
    uVar12 = (uVar14 & 0xff00) << 0x10 | (uVar9 & 0xff00) << 8 | uVar7 & 0xff00 | uVar1 >> 8 & 0xff;
    uVar13 = (uVar14 & 0xff0000) << 8 |
             uVar9 & 0xff0000 | uVar7 >> 8 & 0xff00 | uVar1 >> 0x10 & 0xff;
    uVar16 = uStack_6c ^ uStack_4c;
    uVar19 = uVar3 ^ local_a0;
    uVar15 = uVar14 & 0xff000000 | uVar9 >> 8 & 0xff0000 | uVar7 >> 0x10 & 0xff00 | uVar1 >> 0x18;
    uVar23 = uVar11 ^ local_9c[0];
    uVar7 = uVar23 << 0x18 | (uVar19 & 0xff) << 0x10 | (uVar16 & 0xff) << 8 | uVar24 & 0xff;
    uVar9 = (uVar23 & 0xff00) << 0x10 |
            (uVar19 & 0xff00) << 8 | uVar16 & 0xff00 | uVar24 >> 8 & 0xff;
    uVar1 = uVar6 + unaff_RDI[local_d0 + -1];
    uVar8 = *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^ unaff_RDI[local_d0] ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar12 + uVar8;
    uVar10 = (uVar23 & 0xff0000) << 8 |
             uVar19 & 0xff0000 | uVar16 >> 8 & 0xff00 | uVar24 >> 0x10 & 0xff;
    uVar14 = unaff_RDI[local_d0 + -1] ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
             *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar13 + uVar14;
    uVar8 = uVar8 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar15 + uVar8;
    uVar14 = uVar14 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
             *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar7 + uVar14;
    uVar8 = uVar8 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar8 + uVar9;
    uVar14 = uVar14 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
             *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar14 + uVar10;
    uVar16 = uVar23 & 0xff000000 | uVar19 >> 8 & 0xff0000 | uVar16 >> 0x10 & 0xff00 | uVar24 >> 0x18
    ;
    uVar8 = uVar8 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar8 + uVar16;
    uVar14 = uVar14 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
             *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar14 + uVar6;
    uVar8 = uVar8 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar8 + uVar12;
    uVar14 = uVar14 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
             *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar13 + uVar14;
    uVar8 = uVar8 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar15 + uVar8;
    uVar14 = uVar14 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
             *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar7 + uVar14;
    uVar8 = uVar8 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar8 + uVar9;
    uVar14 = uVar14 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
             *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar14 + uVar10;
    uVar8 = uVar8 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar8 + uVar16;
    uVar14 = uVar14 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
             *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar14 + uVar6;
    uVar8 = uVar8 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar8 + uVar12;
    uVar14 = uVar14 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
             *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar13 + uVar14;
    uVar8 = uVar8 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar15 + uVar8;
    uVar14 = uVar14 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
             *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar14 + uVar7;
    uVar8 = uVar8 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar8 + uVar9;
    uVar14 = uVar14 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
             *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar14 + uVar10;
    uVar8 = uVar8 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar1 = uVar8 + uVar16;
    uVar1 = uVar14 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar1 >> 0x18) * 4);
    uVar16 = uVar16 + uVar1;
    uVar14 = uVar8 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar16 & 0xff) * 4) ^
             *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar16 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar16 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_023befd0 + (ulonglong)(uVar16 >> 0x18) * 4);
    uVar10 = uVar10 + uVar14;
    uVar1 = uVar1 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar10 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar10 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar10 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar10 >> 0x18) * 4);
    uVar9 = uVar9 + uVar1;
    uVar9 = uVar14 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar9 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar9 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar9 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar9 >> 0x18) * 4);
    uVar7 = uVar7 + uVar9;
    uVar1 = uVar1 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar7 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar7 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar7 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar7 >> 0x18) * 4);
    uVar15 = uVar15 + uVar1;
    uVar7 = uVar9 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar15 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar15 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar15 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar15 >> 0x18) * 4);
    uVar13 = uVar13 + uVar7;
    uVar14 = uVar1 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar13 & 0xff) * 4) ^
             *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar13 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_023befd0 + (ulonglong)(uVar13 >> 0x18) * 4);
    uVar12 = uVar12 + uVar14;
    uVar8 = uVar7 ^ *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar12 & 0xff) * 4) ^
            *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_023befd0 + (ulonglong)(uVar12 >> 0x18) * 4);
    uVar6 = uVar6 + uVar8;
    uVar1 = *(uint *)(&DAT_023be3d0 + (ulonglong)(uVar6 & 0xff) * 4);
    uVar7 = *(uint *)(&DAT_023be7d0 + (ulonglong)(uVar6 >> 8 & 0xff) * 4);
    uVar9 = *(uint *)(&DAT_023bebd0 + (ulonglong)(uVar6 >> 0x10 & 0xff) * 4);
    uVar6 = *(uint *)(&DAT_023befd0 + (ulonglong)(uVar6 >> 0x18) * 4);
    local_9c[local_d0] = uVar8;
    local_9c[local_d0 + 1] = uVar14 ^ uVar1 ^ uVar7 ^ uVar9 ^ uVar6;
    if (local_d0 == 7) break;
    uVar9 = local_58 ^ uStack_50;
    uVar14 = uStack_54 ^ uStack_4c;
    uVar1 = local_a0;
    uVar7 = uStack_40;
    local_58 = uStack_50;
    uStack_54 = uStack_4c;
    uVar6 = local_48;
    if (local_d0 == 3) {
      local_58 = uStack_50 ^ 0xff00ff00;
      uStack_54 = uStack_4c ^ 0xff00ff00;
      local_9c[0] = local_9c[0] ^ 0xff0000ff;
      uVar14 = uVar14 ^ 0xff00ffff;
      uVar1 = local_a0 ^ 0xff00ff;
      uVar7 = uStack_40 ^ 0xffff00;
      uVar9 = uVar9 ^ 0xff;
      uVar6 = local_48 ^ 0xff00ff;
    }
    uStack_50 = uVar6;
    uStack_40 = uVar9;
    local_48 = uVar7;
    uStack_4c = uVar1;
    uVar6 = uVar2 ^ uStack_70;
    uVar7 = uStack_70 ^ uVar4;
    uVar9 = uStack_74 ^ uStack_6c;
    uVar1 = uStack_6c ^ uVar3;
    local_d0 = local_d0 + 2;
    uVar2 = uVar4;
    uStack_74 = uVar3;
    uStack_70 = uVar5;
    uVar4 = uVar6;
    uVar3 = uVar9;
    uVar5 = uVar7;
    local_a0 = local_9c[0];
    local_9c[0] = uVar14;
    uStack_6c = uVar11;
  }
  uVar2 = *unaff_RSI ^ local_9c[7];
  uVar3 = unaff_RSI[1] ^ local_9c[8];
  _local_58 = CONCAT44(uVar3,uVar2);
  uVar4 = local_9c[1] << 0x10;
  uVar23 = local_9c[2] & 0xffff;
  uVar16 = local_9c[2] >> 0x10;
  local_d0._0_4_ = local_9c[8] & 0xffff0000;
  uVar5 = local_9c[7] << 0x10 ^ local_9c[7];
  uVar8 = local_9c[3] << 0x10;
  uVar6 = uVar4 ^ local_9c[1] >> 0x10;
  uVar13 = uVar4 ^ local_9c[1] & 0xffff0000;
  uVar10 = uVar6 ^ local_9c[1] & 0xffff ^ uVar23 ^ uVar16 ^ uVar8 ^
           uVar5 ^ local_9c[8] & 0xffff0000 ^ unaff_RSI[2];
  uVar11 = local_9c[8] << 0x10;
  uVar5 = uVar5 ^ local_9c[7] >> 0x10;
  uVar1 = local_9c[8] & 0xffff ^ uVar11;
  uVar14 = local_9c[3] >> 0x10;
  uVar25 = local_9c[7] << 0x10 | local_9c[7] >> 0x10;
  uVar24 = local_9c[8] >> 0x10;
  uVar19 = uVar10 ^ uVar24;
  uVar26 = local_9c[4] << 0x10;
  uVar12 = uVar8 ^ uVar14 ^
           uVar4 ^ uVar23 ^ local_9c[2] << 0x10 ^ uVar16 ^ local_9c[1] & 0xffff ^ uVar1 ^ uVar5 ^
           unaff_RSI[3] ^ uVar26;
  uVar21 = local_9c[4] >> 0x10;
  uVar7 = local_9c[5] << 0x10;
  uVar15 = local_9c[5] >> 0x10;
  uVar4 = uVar12 ^ uVar24;
  _uStack_50 = CONCAT44(uVar4,uVar19);
  uVar27 = uVar26 ^ uVar21 ^
           local_9c[2] & 0xffff0000 ^ uVar16 ^ uVar8 ^ uVar14 ^
           local_9c[1] >> 0x10 ^ uVar13 ^ uVar1 ^ uVar25 ^ unaff_RSI[4] ^ uVar7;
  uVar1 = local_9c[6] << 0x10;
  uVar9 = uVar27 ^ uVar24;
  uVar22 = uVar21 ^ uVar7 ^ uVar15 ^
           local_9c[3] ^ uVar23 ^ uVar14 ^ uVar26 ^
           local_9c[1] & 0xffff0000 ^ uVar6 ^ (uint)local_d0 ^ uVar11 ^ uVar25 ^ unaff_RSI[5] ^
           uVar1;
  uVar6 = uVar22 ^ uVar24;
  _local_48 = CONCAT44(uVar6,uVar9);
  uVar16 = uVar1 ^ local_9c[6] >> 0x10 ^
           local_9c[4] ^ uVar21 ^ uVar7 ^ uVar15 ^ uVar16 ^ local_9c[1] ^ uVar8 ^ uVar5 ^
           unaff_RSI[6];
  uVar7 = uVar16 ^ uVar11;
  uVar5 = uVar1 ^ uVar15 ^ local_9c[6] >> 0x10 ^
          uVar14 ^ local_9c[2] << 0x10 ^ uVar26 ^ local_9c[5] ^
          uVar13 ^ uVar23 ^ (local_9c[8] & 0xffff ^ local_9c[7] >> 0x10 | uVar11) ^ unaff_RSI[7];
  _uStack_40 = CONCAT44(uVar24 ^ uVar5,uVar7);
  uVar1 = *unaff_RDI ^ uVar3 << 0x10;
  uVar8 = uVar2 >> 0x10 ^ uVar1;
  uVar14 = uVar19 << 0x10 ^ unaff_RDI[1];
  uVar11 = uVar3 >> 0x10 ^ uVar14;
  stack0xffffffffffffff88 = CONCAT44(uVar11,uVar8);
  uVar13 = uVar4 << 0x10 ^ unaff_RDI[2];
  uVar10 = uVar10 >> 0x10 ^ uVar13;
  uVar18 = uVar9 << 0x10 ^ unaff_RDI[3];
  uVar25 = uVar12 >> 0x10 ^ uVar18;
  _uStack_70 = CONCAT44(uVar25,uVar10);
  uVar19 = uVar6 << 0x10 ^ unaff_RDI[4];
  local_68 = uVar27 >> 0x10 ^ uVar19;
  uVar16 = uVar16 << 0x10;
  uVar23 = unaff_RDI[5] ^ uVar16;
  uStack_64 = uVar22 >> 0x10 ^ uVar23;
  uVar4 = (uVar24 ^ uVar5) << 0x10 ^ unaff_RDI[6];
  uStack_60 = uVar7 >> 0x10 ^ uVar4;
  uVar12 = (uVar5 >> 0x10 | uVar2 << 0x10 ^ uVar2 & 0xffff0000) ^ unaff_RDI[7];
  uStack_5c = uVar3 & 0xffff0000 ^ uVar3 << 0x10 ^ uVar16 ^ uVar5 & 0xffff0000 ^ uVar12;
  uVar6 = uVar8 * 0x10000;
  uVar28 = uVar1 >> 0x10;
  uVar24 = uVar12 & 0xffff;
  uVar5 = uVar11 * 0x10000;
  uVar15 = uVar6 ^ uVar1 & 0xffff0000;
  uVar21 = uVar6 + uVar28 ^ uVar1 & 0xffff0000;
  uVar3 = uVar14 >> 0x10;
  uVar14 = uVar14 & 0xffff0000;
  uVar18 = uVar18 >> 0x10;
  uVar13 = uVar13 >> 0x10;
  uVar26 = uVar25 << 0x10;
  uVar1 = uVar10 << 0x10;
  uVar20 = local_68 << 0x10;
  uVar2 = uVar23 >> 0x10;
  uVar4 = uVar4 >> 0x10;
  uVar7 = uVar19 >> 0x10;
  local_9c[0] = local_68 ^ uVar25 ^ uVar2;
  uVar9 = uVar2 ^ uStack_64 ^ uVar20;
  uVar16 = uVar12 << 0x10;
  uVar22 = uStack_64 << 0x10;
  uVar27 = uStack_60 << 0x10;
  uVar17 = (uStack_60 ^ uVar12) << 0x10;
  uVar12 = uStack_5c >> 0x10;
  *unaff_RDI = uVar4 ^ uVar16 ^ uVar24 ^ uVar12 ^
               uVar15 + uVar28 ^ uVar14 + uVar3 ^ uVar18 ^ uVar1 ^ uVar9;
  unaff_RDI[1] = uVar22 ^ uStack_60 ^ uVar27 ^ uStack_5c & 0xffff0000 ^ uVar12 ^
                 uVar26 ^ uVar7 ^ uVar11 & 0xffff ^ uVar21 ^ uVar10 ^ uVar13;
  unaff_RDI[2] = uStack_60 ^ uVar4 ^ uVar24 ^ uVar16 ^ uVar12 ^
                 uVar25 ^ uVar2 ^ uVar20 ^
                 (uVar8 & 0xffff | uVar6) ^ uVar3 ^ uVar14 ^ uVar5 ^ uVar18 ^ uVar1;
  unaff_RDI[3] = uVar24 ^ uVar12 ^
                 uVar7 ^ local_68 ^ uVar22 ^ uVar27 ^
                 (uVar10 ^ uVar25) << 0x10 ^ uVar21 ^ uVar14 + uVar3 ^ uVar13 ^ uVar10;
  unaff_RDI[4] = uVar9 ^ uVar4 ^
                 uVar25 ^ uVar26 ^ uVar10 ^ uVar18 ^ uVar5 + uVar28 ^ uVar11 ^ uVar13 ^ uVar17;
  unaff_RDI[5] = uVar22 ^ uVar4 ^ uStack_60 ^ uVar27 ^ uVar16 ^ uVar12 ^
                 uVar25 ^ uVar7 ^ local_68 ^ uVar20 ^
                 uVar1 ^ uVar18 ^ uVar14 ^ uVar10 ^ (uVar15 ^ uVar5 | uVar3) ^
                 uStack_5c & 0xffff0000;
  unaff_RDI[6] = uStack_60 ^ uVar4 ^ uVar27 ^ uVar16 ^ uStack_5c ^
                 (uVar19 ^ uVar23) >> 0x10 ^ uStack_64 ^ uVar22 ^
                 uVar26 ^ local_68 ^ uVar13 ^ uVar25 ^ uVar10 ^ uVar8;
  unaff_RDI[7] = uVar17 ^ uStack_5c ^
                 uVar20 ^ uStack_64 ^ uVar4 ^
                 local_9c[0] ^ uVar28 ^ uVar8 ^ uVar3 ^ uVar5 ^ uVar18 ^ uVar1;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


