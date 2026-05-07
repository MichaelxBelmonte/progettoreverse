// Function: FUN_0096bcf7
// Address: 0096bcf7
// Size: 1334 bytes
// Class: GNString


int FUN_0096bcf7(void)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *unaff_RDI;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  
  iVar4 = 0;
  if (((unaff_RDI[0x5a] == 0) && (iVar3 = FUN_00969dba(), iVar3 != 0)) &&
     (iVar3 = FUN_00969dba(), 0 < iVar3)) {
    FUN_00969bc3();
    FUN_00969bc3();
    iVar3 = FUN_009684b0();
    iVar4 = 0;
    if (iVar3 != 0) {
      uVar14 = (uint)(*unaff_RDI != 0) << 0x1e;
      iVar4 = (*unaff_RDI == 0) + 0xf;
      local_38 = 1;
      do {
        local_38 = local_38 * 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      uVar5 = FUN_009684b0(local_38,8);
      iVar3 = 1;
      if (unaff_RDI[0x5a] == 0) {
        iVar3 = 1;
        local_3c = uVar14;
        do {
          iVar4 = FUN_00969dba();
          if (iVar4 == 0) break;
          iVar4 = FUN_00969dba();
          if (iVar4 < 0) {
            FUN_00969c61();
            uVar12 = uVar5 + 3;
            if (-1 < (int)uVar5) {
              uVar12 = uVar5;
            }
            if (uVar5 - (uVar12 & 0xfffffffc) == 3) {
              iVar3 = -iVar3;
            }
          }
          do {
            local_34 = iVar3;
            uVar12 = **(uint **)(*(longlong *)(unaff_RDI + 0x38) + 8);
            uVar8 = uVar12 & 0x3fffffff;
            if (*unaff_RDI == uVar14) {
              uVar8 = uVar12;
            }
            bVar13 = false;
            if (uVar8 == 0) {
              uVar9 = 0;
              uVar12 = uVar14;
            }
            else {
              uVar9 = 1;
              uVar12 = 1;
              if ((uVar8 & 1) == 0) {
                bVar13 = false;
                uVar12 = 1;
                do {
                  uVar12 = uVar12 * 2;
                  bVar13 = (bool)(bVar13 ^ 1);
                  uVar9 = uVar8 >> 1;
                  uVar2 = uVar8 & 2;
                  uVar8 = uVar9;
                } while (uVar2 == 0);
              }
            }
            if (uVar12 == *unaff_RDI) {
              FUN_00969c8b(*(longlong *)(unaff_RDI + 0x38),0xffffffff);
            }
            else if (1 < uVar12) {
              FUN_00968278();
            }
            iVar3 = local_34;
          } while (uVar9 == 0);
          iVar4 = local_34;
          if ((bVar13) && ((uVar5 == 5 || (uVar5 == 3)))) {
            iVar4 = -local_34;
          }
          iVar3 = FUN_00969df5();
          if (iVar3 < 0) {
            lVar11 = *(longlong *)(unaff_RDI + 0x38);
            if (*unaff_RDI == unaff_RDI[3]) {
              uVar12 = **(uint **)(lVar11 + 8) & 3;
            }
            else {
              uVar12 = FUN_009684b0();
              lVar11 = *(longlong *)(unaff_RDI + 0x38);
            }
            uVar8 = uVar5 + 3;
            if (-1 < (int)uVar5) {
              uVar8 = uVar5;
            }
            if (uVar12 == 3 && uVar5 - (uVar8 & 0xfffffffc) == 3) {
              iVar4 = -iVar4;
            }
            *(undefined8 *)(unaff_RDI + 0x38) = *(undefined8 *)(unaff_RDI + 0x3a);
            *(longlong *)(unaff_RDI + 0x3a) = lVar11;
          }
          FUN_0096ceb0();
          uVar5 = FUN_0096ce71();
          uVar12 = 1;
          local_34 = iVar4;
          if (uVar5 < local_38) {
LAB_0096c033:
            uVar5 = -uVar5;
            iVar4 = local_34;
          }
          else {
            uVar10 = (ulonglong)uVar14;
            uVar14 = local_38;
            uVar12 = 1;
            uVar8 = 0;
            do {
              uVar9 = uVar12;
              uVar7 = (ulonglong)uVar5;
              if ((int)uVar10 == 0) {
                iVar4 = FUN_00969332(&local_48,uVar7);
                uVar14 = local_38;
              }
              else {
                iVar4 = (int)(uVar10 / uVar7);
              }
              uVar5 = (int)uVar10 - iVar4 * uVar5;
              uVar12 = uVar8 - iVar4 * uVar9;
              uVar10 = uVar7;
              uVar8 = uVar9;
              local_48 = uVar12;
            } while (uVar14 <= uVar5);
            if (-1 < (int)uVar12) goto LAB_0096c033;
            uVar12 = -uVar12;
            iVar4 = local_34;
          }
          uVar14 = 1;
          if ((int)uVar12 < 2) {
            local_34 = 0;
          }
          else {
            local_34 = 0;
            FUN_00968278(*(undefined8 *)(unaff_RDI + 0x3c));
            uVar14 = FUN_00969e62();
            uVar12 = uVar12 / uVar14;
            if (1 < uVar14) {
              FUN_00968278(*(undefined8 *)(unaff_RDI + 0x3a),uVar14);
              local_34 = FUN_00968278(*(undefined8 *)(unaff_RDI + 0x3c),uVar14);
            }
          }
          local_40 = uVar5;
          if (*unaff_RDI == unaff_RDI[3]) {
            uVar5 = **(uint **)(*(longlong *)(unaff_RDI + 0x3a) + 8) & 7;
          }
          else {
            uVar5 = FUN_009684b0();
          }
          if ((uVar12 & 1) == 0) {
            uVar7 = (ulonglong)uVar12;
            do {
              if ((uVar5 == 5) || (uVar5 == 3)) {
                iVar4 = -iVar4;
              }
              uVar10 = uVar7 >> 1;
              uVar1 = uVar7 & 2;
              uVar7 = uVar10;
            } while (uVar1 == 0);
          }
          else {
            uVar10 = (ulonglong)uVar12;
          }
          uVar8 = uVar5 + 3;
          if (-1 < (int)uVar5) {
            uVar8 = uVar5;
          }
          iVar3 = -iVar4;
          if (uVar5 - (uVar8 & 0xfffffffc) != 3 || (~(uint)uVar10 & 3) != 0) {
            iVar3 = iVar4;
          }
          local_44 = uVar14;
          FUN_00968278(*(undefined8 *)(unaff_RDI + 0x3c),uVar10);
          iVar4 = FUN_0096cf6d();
          iVar6 = FUN_0096cf6d();
          iVar3 = iVar6 * iVar4 * iVar3;
          if (iVar3 == 0) {
            return 0;
          }
          if (1 < (int)uVar12) {
            FUN_009680a0(*(undefined8 *)(unaff_RDI + 0x38),uVar12);
          }
          FUN_0096820e(*(undefined8 *)(unaff_RDI + 0x3c),local_40);
          FUN_00967e3d(*(undefined8 *)(unaff_RDI + 0x38),*(undefined8 *)(unaff_RDI + 0x3c));
          uVar14 = local_3c;
          if (local_3c == *unaff_RDI) {
            FUN_00969c8b(*(undefined8 *)(unaff_RDI + 0x38),0xffffffff);
          }
          else {
            FUN_00968278(*(undefined8 *)(unaff_RDI + 0x38),local_3c);
          }
        } while (unaff_RDI[0x5a] == 0);
      }
      iVar6 = FUN_00969dba();
      iVar4 = 0;
      if (iVar6 == 1) {
        iVar4 = iVar3;
      }
    }
  }
  return iVar4;
}


