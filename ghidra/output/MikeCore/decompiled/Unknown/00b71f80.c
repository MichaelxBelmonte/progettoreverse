// Function: FUN_00b71f80
// Address: 00b71f80
// Size: 1987 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00b71fd5) */
/* WARNING: Removing unreachable block (ram,0x00b71fde) */

void FUN_00b71f80(undefined4 param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong *unaff_RDI;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar15;
  longlong local_70;
  char local_68;
  longlong local_40;
  
  (**(code **)(*unaff_RDI + 0x5d8))();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if (*(int *)(local_70 + 0xc) < 1) {
    bVar5 = false;
    plVar11 = (longlong *)0x0;
    bVar4 = false;
    local_40 = 0;
  }
  else {
    lVar12 = 0;
    local_40 = 0;
    bVar4 = false;
    plVar11 = (longlong *)0x0;
    bVar5 = false;
    do {
      lVar14 = *(longlong *)(*(longlong *)(local_70 + 0x10) + lVar12 * 8);
      if (local_40 == lVar14) {
        if ((!bVar4) && (local_40 != 0)) {
          bVar4 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar14 != 0) {
          FUN_00d50b00();
        }
        if ((bVar4) && (local_40 != 0)) {
          FUN_00d50b20();
          bVar4 = true;
          local_40 = lVar14;
        }
        else {
          bVar4 = true;
          local_40 = lVar14;
        }
      }
      cVar6 = FUN_00b51d00();
      cVar7 = FUN_00b518a0();
      if (cVar7 == '\0') {
        cVar7 = FUN_00b51910();
        if (cVar7 == '\0') {
          switch(cVar6 << 4 | (byte)(cVar6 + 0x60U) >> 4) {
          case 0:
            cVar6 = FUN_00b518d0();
            uVar1 = *(uint *)(unaff_RDI[0x15] + 0xc);
            bVar2 = true;
            if (0 < (int)uVar1) {
              lVar14 = *(longlong *)(unaff_RDI[0x15] + 0x10);
              uVar10 = 0;
              do {
                if (*(char *)(*(longlong *)(lVar14 + uVar10 * 8) + 0x90) == cVar6) {
                  plVar13 = *(longlong **)(lVar14 + uVar10 * 8);
                  if (plVar13 != (longlong *)0x0) {
                    FUN_00d50b00();
                    bVar2 = false;
                    if (plVar11 == plVar13) goto LAB_00b72561;
                    goto LAB_00b72275;
                  }
                  bVar2 = false;
                  break;
                }
                uVar10 = uVar10 + 1;
              } while (uVar1 != uVar10);
            }
            plVar13 = (longlong *)0x0;
            if (plVar11 == (longlong *)0x0) {
LAB_00b72561:
              if ((bVar5) || (plVar11 == (longlong *)0x0)) {
                if (bVar2) {
                  if (plVar11 != (longlong *)0x0) goto LAB_00b725ab;
                }
                else if (plVar11 != (longlong *)0x0) {
                  FUN_00d50b20();
                  goto LAB_00b725ab;
                }
                goto LAB_00b72016;
              }
              bVar5 = true;
              if (bVar2) {
                FUN_00d50b00();
              }
            }
            else {
LAB_00b72275:
              if (bVar2) {
                if (plVar13 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar5) && (plVar11 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else if ((bVar5) && (plVar11 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              bVar5 = true;
              plVar11 = plVar13;
              if (plVar13 == (longlong *)0x0) goto LAB_00b72016;
            }
LAB_00b725ab:
            FUN_00b51da0();
            FUN_00b73c30();
            break;
          case 1:
            bVar9 = FUN_00b51df0();
            uVar10 = (ulonglong)bVar9;
            *(undefined1 *)(unaff_RDI[0x13] + uVar10) = *(undefined1 *)(unaff_RDI[0x12] + uVar10);
            uVar8 = FUN_00b51e10();
            *(undefined1 *)(unaff_RDI[0x12] + uVar10) = uVar8;
            break;
          case 2:
            uVar8 = FUN_00b51e30();
            *(undefined1 *)(unaff_RDI[0x12] + 0x105) = uVar8;
            break;
          case 3:
            *(undefined1 *)(unaff_RDI[0x13] + 0x104) = *(undefined1 *)(unaff_RDI[0x12] + 0x104);
            uVar8 = FUN_00b51da0();
            *(undefined1 *)(unaff_RDI[0x12] + 0x104) = uVar8;
            break;
          case 4:
            *(undefined4 *)(unaff_RDI[0x13] + 0x100) = *(undefined4 *)(unaff_RDI[0x12] + 0x100);
            uVar15 = FUN_00b51e50();
            *(undefined4 *)(unaff_RDI[0x12] + 0x100) = uVar15;
          }
        }
        else {
          cVar6 = FUN_00b518d0();
          uVar1 = *(uint *)(unaff_RDI[0x15] + 0xc);
          bVar2 = true;
          if (0 < (int)uVar1) {
            lVar14 = *(longlong *)(unaff_RDI[0x15] + 0x10);
            uVar10 = 0;
            do {
              if (*(char *)(*(longlong *)(lVar14 + uVar10 * 8) + 0x90) == cVar6) {
                plVar13 = *(longlong **)(lVar14 + uVar10 * 8);
                if (plVar13 != (longlong *)0x0) {
                  FUN_00d50b00();
                  bVar2 = false;
                  if (plVar11 == plVar13) goto LAB_00b72389;
                  goto LAB_00b721b5;
                }
                bVar2 = false;
                break;
              }
              uVar10 = uVar10 + 1;
            } while (uVar1 != uVar10);
          }
          plVar13 = (longlong *)0x0;
          if (plVar11 == (longlong *)0x0) {
LAB_00b72389:
            if ((bVar5) || (plVar11 == (longlong *)0x0)) {
              if (bVar2) {
                if (plVar11 != (longlong *)0x0) goto LAB_00b723db;
              }
              else if (plVar11 != (longlong *)0x0) {
                FUN_00d50b20();
                goto LAB_00b723db;
              }
              goto LAB_00b72016;
            }
            bVar5 = true;
            if (bVar2) {
              FUN_00d50b00();
            }
          }
          else {
LAB_00b721b5:
            if (bVar2) {
              if (plVar13 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar5) && (plVar11 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if ((bVar5) && (plVar11 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            bVar5 = true;
            plVar11 = plVar13;
            if (plVar13 == (longlong *)0x0) goto LAB_00b72016;
          }
LAB_00b723db:
          FUN_00b51d80();
          FUN_00b73c10();
        }
      }
      else {
        uVar1 = *(uint *)(unaff_RDI[0x15] + 0xc);
        bVar2 = true;
        if (0 < (int)uVar1) {
          lVar14 = *(longlong *)(unaff_RDI[0x15] + 0x10);
          uVar10 = 0;
          do {
            if (*(char *)(*(longlong *)(lVar14 + uVar10 * 8) + 0x90) == -0x80) {
              plVar13 = *(longlong **)(lVar14 + uVar10 * 8);
              if (plVar13 != (longlong *)0x0) {
                FUN_00d50b00();
                bVar3 = false;
                bVar2 = false;
                if (plVar11 == plVar13) goto LAB_00b722dc;
                goto LAB_00b72106;
              }
              bVar2 = false;
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar1 != uVar10);
        }
        plVar13 = (longlong *)0x0;
        bVar3 = bVar2;
        if (plVar11 == (longlong *)0x0) {
LAB_00b722dc:
          if ((bVar5) || (plVar11 == (longlong *)0x0)) {
            if (bVar3) goto joined_r0x00b72362;
            if (plVar11 == (longlong *)0x0) goto LAB_00b72016;
            FUN_00d50b20();
          }
          else {
            bVar5 = true;
            if (bVar3) {
              FUN_00d50b00();
            }
          }
        }
        else {
LAB_00b72106:
          if (bVar2) {
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar5) && (plVar11 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if ((bVar5) && (plVar11 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar5 = true;
          plVar11 = plVar13;
joined_r0x00b72362:
          if (plVar11 == (longlong *)0x0) {
LAB_00b72016:
            plVar11 = (longlong *)0x0;
            goto switchD_00b72220_default;
          }
        }
        FUN_00b518d0();
        uVar8 = FUN_00b51d80();
        FUN_00b73b90(extraout_XMM0_Da,uVar8);
      }
switchD_00b72220_default:
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(local_70 + 0xc));
  }
  ___bzero();
  ___bzero();
  lVar12 = unaff_RDI[0x15];
  if (0 < *(int *)(lVar12 + 0xc)) {
    lVar14 = 0;
    do {
      plVar13 = *(longlong **)(*(longlong *)(lVar12 + 0x10) + lVar14 * 8);
      if (plVar11 == plVar13) {
        if ((!bVar5) && (plVar11 != (longlong *)0x0)) {
          bVar5 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar13 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar5) && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
          bVar5 = true;
          plVar11 = plVar13;
        }
        else {
          bVar5 = true;
          plVar11 = plVar13;
        }
      }
      cVar6 = FUN_00b73c60();
      if (cVar6 != '\0') {
        (**(code **)(*plVar11 + 0x400))(param_1,param_2);
      }
      lVar14 = lVar14 + 1;
      lVar12 = unaff_RDI[0x15];
    } while (lVar14 < *(int *)(lVar12 + 0xc));
  }
  if ((bVar5) && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  return;
}


