// Function: FUN_0060d290
// Address: 0060d290
// Size: 2575 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x0060dc79) */
/* WARNING: Removing unreachable block (ram,0x0060dc82) */
/* WARNING: Removing unreachable block (ram,0x0060d763) */
/* WARNING: Removing unreachable block (ram,0x0060d76c) */

void FUN_0060d290(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  undefined4 local_58;
  longlong local_48;
  char local_40;
  
  iVar5 = FUN_01d3a5a0();
  if (iVar5 != 5) {
    iVar5 = FUN_01d3a5a0();
    if (iVar5 != 1) {
      return;
    }
    iVar5 = FUN_01d3b630();
    if (iVar5 != 1) {
      return;
    }
    if (unaff_RDI[0x40] == 0) {
      return;
    }
    FUN_01d3abf0();
    local_58 = FUN_01e466c0();
    lVar8 = unaff_RDI[0x32];
    if (lVar8 == 0) {
      return;
    }
    lVar7 = 0;
    do {
      if (*(int *)(lVar8 + 0xc) <= (int)lVar7) goto LAB_0060d634;
      lVar6 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar7 * 8);
      FUN_003a4d40();
      uVar9 = (**(code **)(*unaff_RDI + 0xae0))();
      cVar4 = FUN_00d05410(local_58,uVar9,param_2);
      lVar7 = lVar7 + 1;
      param_2 = uVar9;
    } while (cVar4 == '\0');
    if (unaff_RDI[0x34] != lVar6) {
      if (unaff_RDI[0x34] == 0) {
        lVar8 = 0;
      }
      else {
        FUN_003a4d40();
        (**(code **)(*unaff_RDI + 0xae0))();
        (**(code **)(*unaff_RDI + 0x618))();
        lVar8 = unaff_RDI[0x34];
      }
      if (lVar8 != lVar6) {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        unaff_RDI[0x34] = lVar6;
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar6 != 0) {
        FUN_003a4d40();
        (**(code **)(*unaff_RDI + 0xae0))();
        (**(code **)(*unaff_RDI + 0x618))();
      }
    }
    if (((char)unaff_RDI[0x3d] != '\0') &&
       (*(int *)((longlong)unaff_RDI + 500) < *(int *)(unaff_RDI[0x31] + 0xc))) {
      FUN_003a4d50();
      uVar10 = (**(code **)(*unaff_RDI + 0xae0))();
      cVar4 = FUN_00d05410(local_58,uVar10,uVar9);
      if (cVar4 != '\0') {
        if (unaff_RDI[0x36] != lVar6) {
          if (unaff_RDI[0x36] == 0) {
            lVar8 = 0;
          }
          else {
            FUN_003a4d40();
            (**(code **)(*unaff_RDI + 0xae0))();
            (**(code **)(*unaff_RDI + 0x618))();
            lVar8 = unaff_RDI[0x36];
          }
          if (lVar8 != lVar6) {
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            unaff_RDI[0x36] = lVar6;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
          }
          if (lVar6 != 0) {
            FUN_003a4d40();
            (**(code **)(*unaff_RDI + 0xae0))();
            (**(code **)(*unaff_RDI + 0x618))();
          }
        }
        if (unaff_RDI[0x35] != lVar6) {
          if (unaff_RDI[0x35] == 0) {
            lVar8 = 0;
          }
          else {
            FUN_003a4d40();
            (**(code **)(*unaff_RDI + 0xae0))();
            (**(code **)(*unaff_RDI + 0x618))();
            lVar8 = unaff_RDI[0x35];
          }
          if (lVar8 != lVar6) {
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            unaff_RDI[0x35] = lVar6;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
          }
          if (lVar6 != 0) {
            FUN_003a4d40();
            (**(code **)(*unaff_RDI + 0xae0))();
            (**(code **)(*unaff_RDI + 0x618))();
          }
        }
        bVar3 = true;
LAB_0060d913:
        (**(code **)(*unaff_RDI + 0x658))();
        lVar8 = *unaff_RSI;
        if (lVar8 == local_48) {
          uVar9 = uVar10;
          if (((char)unaff_RSI[1] == '\0') && (local_48 != 0)) {
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_0060d99e;
            }
            goto LAB_0060d963;
          }
        }
        else {
          lVar7 = unaff_RSI[1];
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            *unaff_RSI = local_48;
            if (((char)lVar7 != '\0') && (lVar8 != 0)) {
              FUN_00d50b20();
            }
LAB_0060d99e:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            uVar9 = uVar10;
          }
          else {
            *unaff_RSI = local_48;
            if (((char)lVar7 != '\0') && (lVar8 != 0)) {
              FUN_00d50b20();
            }
LAB_0060d963:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            local_40 = '\0';
            uVar9 = uVar10;
          }
        }
        if (*unaff_RSI != 0) {
          iVar5 = FUN_01d3a5a0();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (iVar5 == 6) goto LAB_0060db44;
          iVar5 = FUN_01d3a5a0();
          uVar10 = uVar9;
          if (iVar5 == 5) {
            FUN_01d3abf0();
            local_58 = FUN_01e466c0();
            FUN_003a4d50();
            uVar10 = (**(code **)(*unaff_RDI + 0xae0))();
            cVar4 = FUN_00d05410(local_58,uVar10,uVar9);
            lVar8 = unaff_RDI[0x35];
            if (cVar4 == '\0') {
              bVar3 = false;
              if (lVar8 != 0) {
                FUN_003a4d40();
                (**(code **)(*unaff_RDI + 0xae0))();
                (**(code **)(*unaff_RDI + 0x618))();
                bVar3 = false;
                if (unaff_RDI[0x35] != 0) {
                  unaff_RDI[0x35] = 0;
                  bVar3 = false;
                  FUN_00d50b20();
                }
              }
            }
            else {
              bVar3 = true;
              if (lVar8 != lVar6) {
                if (lVar8 == 0) {
                  lVar8 = 0;
                }
                else {
                  FUN_003a4d40();
                  (**(code **)(*unaff_RDI + 0xae0))();
                  (**(code **)(*unaff_RDI + 0x618))();
                  lVar8 = unaff_RDI[0x35];
                }
                if (lVar8 != lVar6) {
                  if (lVar6 != 0) {
                    FUN_00d50b00();
                  }
                  unaff_RDI[0x35] = lVar6;
                  if (lVar8 != 0) {
                    FUN_00d50b20();
                  }
                }
                bVar3 = true;
                if (lVar6 != 0) {
                  FUN_003a4d40();
                  (**(code **)(*unaff_RDI + 0xae0))();
                  (**(code **)(*unaff_RDI + 0x618))();
                  bVar3 = true;
                }
              }
            }
          }
          goto LAB_0060d913;
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
LAB_0060db44:
        if (unaff_RDI[0x35] != 0) {
          FUN_003a4d40();
          (**(code **)(*unaff_RDI + 0xae0))();
          (**(code **)(*unaff_RDI + 0x618))();
          if (unaff_RDI[0x35] != 0) {
            unaff_RDI[0x35] = 0;
            FUN_00d50b20();
          }
        }
        if (unaff_RDI[0x36] != 0) {
          FUN_003a4d40();
          (**(code **)(*unaff_RDI + 0xae0))();
          (**(code **)(*unaff_RDI + 0x618))();
          if (unaff_RDI[0x36] != 0) {
            unaff_RDI[0x36] = 0;
            FUN_00d50b20();
          }
        }
        FUN_003a4d40();
        uVar10 = (**(code **)(*unaff_RDI + 0xae0))();
        cVar4 = FUN_00d05410(local_58,uVar10,uVar9);
        if ((cVar4 == '\0') && (unaff_RDI[0x34] != 0)) {
          FUN_003a4d40();
          (**(code **)(*unaff_RDI + 0xae0))();
          (**(code **)(*unaff_RDI + 0x618))();
          if (unaff_RDI[0x34] != 0) {
            unaff_RDI[0x34] = 0;
            FUN_00d50b20();
          }
        }
        if (bVar3) {
          plVar2 = (longlong *)unaff_RDI[0x40];
          uVar9 = FUN_00d237a0();
          (**(code **)(*plVar2 + 0x20))(uVar9,(int)unaff_RDI[0x3f]);
        }
        goto LAB_0060d634;
      }
    }
    iVar5 = FUN_01d3b620();
    if (iVar5 == 1) {
      plVar2 = (longlong *)unaff_RDI[0x40];
      FUN_00d237a0();
      (**(code **)(*plVar2 + 0x18))();
    }
    else {
      iVar5 = FUN_01d3b620();
      if (iVar5 == 2) {
        cVar4 = (**(code **)(*unaff_RDI + 0xad0))();
        if (cVar4 == '\0') {
          if ((longlong *)unaff_RDI[0x40] != (longlong *)0x0) {
            (**(code **)(*(longlong *)unaff_RDI[0x40] + 0x40))();
          }
        }
        else {
          FUN_0060dd80();
        }
      }
    }
    goto LAB_0060d634;
  }
  FUN_01d3abf0();
  uVar9 = FUN_01e466c0();
  lVar8 = unaff_RDI[0x32];
  if (lVar8 == 0) {
LAB_0060d4ba:
    if (unaff_RDI[0x34] == 0) {
      return;
    }
    FUN_003a4d40();
    (**(code **)(*unaff_RDI + 0xae0))();
    (**(code **)(*unaff_RDI + 0x618))();
    if (unaff_RDI[0x34] == 0) {
      return;
    }
    unaff_RDI[0x34] = 0;
    FUN_00d50b20();
    return;
  }
  uVar12 = 0;
  lVar6 = 0;
  lVar7 = lVar8;
  do {
    iVar5 = (int)lVar6;
    if (*(int *)(lVar8 + 0xc) <= iVar5) {
      FUN_006106b0();
      goto LAB_0060d4ba;
    }
    lVar1 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar6 * 8);
    FUN_003a4d40();
    uVar10 = (**(code **)(*unaff_RDI + 0xae0))();
    cVar4 = FUN_00d05410(uVar9,uVar10,param_2,param_2,uVar12,lVar7,iVar5);
    lVar6 = lVar6 + 1;
    param_2 = uVar10;
  } while (cVar4 == '\0');
  cVar4 = FUN_01e45650();
  if (cVar4 == '\0') {
    (**(code **)(*unaff_RDI + 0x740))();
  }
  if (unaff_RDI[0x34] != lVar1) {
    if (unaff_RDI[0x34] == 0) {
      lVar8 = 0;
      if (lVar1 != 0) goto LAB_0060d516;
    }
    else {
      FUN_003a4d40();
      (**(code **)(*unaff_RDI + 0xae0))();
      (**(code **)(*unaff_RDI + 0x618))();
      lVar8 = unaff_RDI[0x34];
      if (lVar8 != lVar1) {
LAB_0060d516:
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        unaff_RDI[0x34] = lVar1;
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
    }
    if (lVar1 != 0) {
      FUN_003a4d40();
      (**(code **)(*unaff_RDI + 0xae0))();
      (**(code **)(*unaff_RDI + 0x618))();
    }
  }
  if (((char)unaff_RDI[0x3d] != '\0') &&
     (*(int *)((longlong)unaff_RDI + 500) < *(int *)(unaff_RDI[0x31] + 0xc))) {
    FUN_003a4d50();
    uVar11 = (**(code **)(*unaff_RDI + 0xae0))();
    cVar4 = FUN_00d05410(uVar9,uVar11,uVar10);
    if (cVar4 != '\0') {
      if (unaff_RDI[0x35] != lVar1) {
        if (unaff_RDI[0x35] == 0) {
          lVar8 = 0;
        }
        else {
          FUN_003a4d40();
          (**(code **)(*unaff_RDI + 0xae0))();
          (**(code **)(*unaff_RDI + 0x618))();
          lVar8 = unaff_RDI[0x35];
        }
        if (lVar8 != lVar1) {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          unaff_RDI[0x35] = lVar1;
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar1 != 0) {
          FUN_003a4d40();
          (**(code **)(*unaff_RDI + 0xae0))();
          (**(code **)(*unaff_RDI + 0x618))();
        }
      }
      goto LAB_0060d634;
    }
  }
  if (unaff_RDI[0x35] != 0) {
    FUN_003a4d40();
    (**(code **)(*unaff_RDI + 0xae0))();
    (**(code **)(*unaff_RDI + 0x618))();
    if (unaff_RDI[0x35] != 0) {
      unaff_RDI[0x35] = 0;
      FUN_00d50b20();
    }
  }
LAB_0060d634:
  FUN_006106b0();
  return;
}


