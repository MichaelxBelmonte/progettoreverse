// Function: FUN_0096d3b2
// Address: 0096d3b2
// Size: 1880 bytes
// Class: GNString


undefined8 FUN_0096d3b2(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint *unaff_RDI;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int local_4c;
  uint local_40;
  undefined1 local_38 [4];
  uint local_34;
  
  uVar11 = 0;
  if (unaff_RDI[0x5a] == 0) {
    FUN_00969bc3();
    FUN_00969bc3();
    iVar5 = FUN_00969b95();
    FUN_00969ba3();
    FUN_00969ba3();
    FUN_00969446();
    FUN_00969412();
    iVar6 = FUN_00969dba();
    if (iVar6 != 0) {
      bVar4 = false;
      bVar3 = true;
      local_4c = 0;
      uVar7 = 0;
      uVar8 = 0;
      local_40 = 0;
      uVar9 = 0;
LAB_0096d494:
      if (uVar9 == 0) {
        FUN_00968a1c(*(undefined8 *)(unaff_RDI + 0x40),*(undefined8 *)(unaff_RDI + 0x3a));
        auVar1 = *(undefined1 (*) [16])(unaff_RDI + 0x38);
        auVar19._0_8_ = auVar1._8_8_;
        auVar19._8_4_ = auVar1._0_4_;
        auVar19._12_4_ = auVar1._4_4_;
        *(undefined1 (*) [16])(unaff_RDI + 0x38) = auVar19;
        FUN_009685c4(*(undefined8 *)(unaff_RDI + 0x36),*(undefined8 *)(unaff_RDI + 0x40));
        FUN_00967e3d(*(undefined8 *)(unaff_RDI + 0x3c),*(undefined8 *)(unaff_RDI + 0x36));
        auVar1 = *(undefined1 (*) [16])(unaff_RDI + 0x3c);
        auVar20._0_8_ = auVar1._8_8_;
        auVar20._8_4_ = auVar1._0_4_;
        auVar20._12_4_ = auVar1._4_4_;
        *(undefined1 (*) [16])(unaff_RDI + 0x3c) = auVar20;
        local_4c = local_4c + 1;
      }
      else {
        FUN_009680a0(*(undefined8 *)(unaff_RDI + 0x40));
        FUN_009680a0(*(undefined8 *)(unaff_RDI + 0x38),local_40);
        local_34 = uVar9;
        FUN_009680a0(*(undefined8 *)(unaff_RDI + 0x36),uVar9);
        FUN_009680a0(*(undefined8 *)(unaff_RDI + 0x3a),uVar7);
        if (bVar3) {
          FUN_00967d35(*(undefined8 *)(unaff_RDI + 0x38),*(undefined8 *)(unaff_RDI + 0x36));
          uVar11 = *(undefined8 *)(unaff_RDI + 0x3a);
          uVar14 = *(undefined8 *)(unaff_RDI + 0x40);
        }
        else {
          FUN_00967d35(*(undefined8 *)(unaff_RDI + 0x38),*(undefined8 *)(unaff_RDI + 0x38));
          uVar11 = *(undefined8 *)(unaff_RDI + 0x3a);
          uVar14 = uVar11;
        }
        FUN_00967d35(uVar11,uVar14);
        FUN_009680a0(*(undefined8 *)(unaff_RDI + 0x40),uVar8);
        FUN_009680a0(*(undefined8 *)(unaff_RDI + 0x3c),local_40);
        FUN_009680a0(*(undefined8 *)(unaff_RDI + 0x36),local_34);
        FUN_009680a0(*(undefined8 *)(unaff_RDI + 0x3e),uVar7);
        if (local_40 == 0) {
          FUN_00969bc3();
        }
        else {
          FUN_00967b0c(*(undefined8 *)(unaff_RDI + 0x3c),*(undefined8 *)(unaff_RDI + 0x36));
        }
        FUN_00967b0c(*(undefined8 *)(unaff_RDI + 0x3e),*(undefined8 *)(unaff_RDI + 0x40));
      }
      if ((unaff_RDI[0x5a] == 0) && (iVar6 = FUN_00969dba(), iVar6 != 0)) {
        iVar6 = **(int **)(unaff_RDI + 0x38);
        lVar17 = (longlong)iVar6;
        puVar2 = *(uint **)(*(int **)(unaff_RDI + 0x38) + 2);
        if (lVar17 == 1) {
          uVar18 = (ulonglong)*puVar2;
          uVar13 = (ulonglong)**(uint **)(*(longlong *)(unaff_RDI + 0x3a) + 8);
        }
        else {
          uVar18 = (ulonglong)puVar2[lVar17 + -1];
          iVar12 = puVar2[lVar17 + -1] + 1;
          uVar13 = (ulonglong)*unaff_RDI;
          if (uVar13 == 0) {
            uVar9 = puVar2[lVar17 + -2];
            if ((iVar6 < 3) || (iVar12 == 0)) {
              uVar7 = *(uint *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x3a) + 8) + -4 + lVar17 * 4
                               );
              uVar13 = (ulonglong)
                       *(uint *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x3a) + 8) + -8 +
                                lVar17 * 4);
              if (iVar6 == 2) {
                bVar4 = true;
              }
            }
            else {
              uVar9 = FUN_00969332(local_38,iVar12);
              uVar18 = (ulonglong)uVar9;
              local_34 = FUN_00969332(local_38,iVar12);
              uVar7 = FUN_00969332(local_38,iVar12);
              uVar13 = FUN_00969332(local_38,iVar12);
              uVar9 = local_34;
            }
            uVar18 = (ulonglong)uVar9 | uVar18 << 0x20;
            uVar13 = uVar13 & 0xffffffff | (ulonglong)uVar7 << 0x20;
            goto LAB_0096d8a3;
          }
          if (2 < iVar6) {
            uVar7 = FUN_0096930d(iVar12,puVar2[lVar17 + -2],local_38);
            uVar9 = *unaff_RDI;
            uVar8 = FUN_0096930d(iVar12,*(undefined4 *)
                                         (*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 8) + -0xc
                                         + lVar17 * 4),local_38);
            uVar18 = (ulonglong)uVar8 + (ulonglong)uVar7 * (ulonglong)uVar9;
            uVar7 = FUN_0096930d(iVar12,*(undefined4 *)
                                         (*(longlong *)(*(longlong *)(unaff_RDI + 0x3a) + 8) + -8 +
                                         lVar17 * 4),local_38);
            uVar9 = *unaff_RDI;
            uVar13 = FUN_0096930d(iVar12,*(undefined4 *)
                                          (*(longlong *)(*(longlong *)(unaff_RDI + 0x3a) + 8) + -0xc
                                          + lVar17 * 4),local_38);
            uVar13 = (uVar13 & 0xffffffff) + (ulonglong)uVar7 * (ulonglong)uVar9;
            goto LAB_0096d8a3;
          }
          uVar18 = (ulonglong)puVar2[lVar17 + -2] + uVar18 * uVar13;
          uVar13 = (ulonglong)
                   *(uint *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x3a) + 8) + -8 + lVar17 * 4) +
                   *(uint *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x3a) + 8) + -4 + lVar17 * 4) *
                   uVar13;
        }
        bVar4 = true;
LAB_0096d8a3:
        local_40 = 1;
        bVar3 = true;
        local_34 = 0;
        uVar7 = 1;
        uVar9 = 0;
        do {
          uVar8 = uVar9;
          uVar15 = uVar13;
          if (bVar4) {
            if ((uVar15 == 0) || (uVar9 = FUN_0096db0a(), uVar9 == 0)) goto LAB_0096d9f9;
          }
          else {
            if (bVar3) {
              if (((uVar15 == uVar8) || (uVar7 + uVar15 == 0)) ||
                 (uVar9 = FUN_0096db0a(), uVar9 == 0)) goto LAB_0096d9f9;
              uVar10 = FUN_0096db0a(local_34);
            }
            else {
              if (((uVar8 + uVar15 == 0) || (uVar15 == uVar7)) ||
                 (uVar9 = FUN_0096db0a(), uVar9 == 0)) goto LAB_0096d9f9;
              uVar10 = FUN_0096db0a();
            }
            if (uVar9 != uVar10) goto LAB_0096d9f9;
          }
          if (uVar9 == 1) {
            uVar16 = uVar7 + local_34;
            uVar13 = uVar15;
            uVar10 = uVar8;
            if ((int)uVar16 < 0) goto LAB_0096d9f9;
          }
          else {
            if ((0x80000000 - local_34) / uVar7 <= uVar9) goto LAB_0096d9f9;
            uVar10 = uVar9 * uVar8;
            uVar16 = uVar9 * uVar7 + local_34;
            uVar13 = uVar9 * uVar15;
          }
          local_4c = local_4c + 1;
          bVar3 = (bool)(bVar3 ^ 1);
          uVar13 = uVar18 - uVar13;
          uVar18 = uVar15;
          local_34 = uVar7;
          uVar7 = uVar16;
          uVar9 = uVar10 + local_40;
          local_40 = uVar8;
        } while( true );
      }
      goto LAB_0096da36;
    }
    local_4c = 0;
LAB_0096da36:
    if ((int)((uint)(iVar5 == -1) + local_4c) % 2 == 1) {
      FUN_00967fc8(*(undefined8 *)(unaff_RDI + 0x3c),*(undefined8 *)(unaff_RDI + 0x3c));
    }
    if (param_1 != param_3) {
      FUN_00969c61();
      FUN_00969150(*(undefined8 *)(unaff_RDI + 0x38),*(undefined8 *)(unaff_RDI + 0x3c),param_2);
      FUN_00969bc3();
    }
    FUN_00969bc3();
    if ((param_4 != param_1) && (param_4 != param_3)) {
      FUN_00969bc3();
    }
    uVar11 = FUN_00969dba();
  }
  return uVar11;
LAB_0096d9f9:
  local_4c = local_4c % 2;
  iVar6 = FUN_00969dba();
  uVar9 = local_34;
  if (iVar6 == 0) goto LAB_0096da36;
  goto LAB_0096d494;
}


