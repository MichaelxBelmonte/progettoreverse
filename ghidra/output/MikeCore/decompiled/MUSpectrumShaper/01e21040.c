// Function: FUN_01e21040
// Address: 01e21040
// Size: 1933 bytes
// Class: MUSpectrumShaper


void FUN_01e21040(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  if (*unaff_RSI != 0) {
    bVar2 = false;
    do {
      iVar4 = FUN_01d3a5a0();
      if (iVar4 == 6) {
        return;
      }
      iVar4 = FUN_01d3a5a0();
      if (iVar4 == 5) {
        FUN_01d3abf0();
        uVar9 = FUN_01e466c0();
        if ((char)unaff_RDI[0x28] == '\0') {
          iVar4 = *(int *)(*(longlong *)(unaff_RDI[0x27] + 0x18) + 0xc);
          if (0 < iVar4) {
            uVar7 = 0;
            uVar10 = param_2;
            do {
              param_2 = FUN_01e21f60();
              cVar3 = FUN_00d05410(uVar9,param_2,uVar10);
              if (cVar3 != '\0') {
                if (*(int *)(unaff_RDI[0x27] + 0xc) != (int)uVar7) {
                  lVar5 = *(longlong *)
                           (*(longlong *)(*(longlong *)(unaff_RDI[0x27] + 0x18) + 0x10) + uVar7 * 8)
                  ;
                  if (lVar5 != 0) {
                    FUN_00d50b00();
                  }
                  cVar3 = FUN_01e26480();
                  if (lVar5 != 0) {
                    FUN_00d50b20();
                  }
                  lVar5 = unaff_RDI[0x27];
                  if (cVar3 == '\0') {
                    uVar7 = (ulonglong)*(uint *)(lVar5 + 0xc);
                  }
                  else {
                    *(undefined4 *)(lVar5 + 0x10) = 0xffffffff;
                    *(int *)(lVar5 + 0xc) = (int)uVar7;
                    if (*(char *)(lVar5 + 0x31) != '\0') {
                      FUN_01e1f2c0();
                    }
                  }
                  (**(code **)(*unaff_RDI + 0x620))();
                  (**(code **)(*unaff_RDI + 0x778))();
                }
                bVar2 = true;
                cVar3 = FUN_01e4ad60();
                if (cVar3 == '\0') goto LAB_01e21440;
                if ((int)uVar7 == -1) goto LAB_01e211f9;
                lVar5 = (longlong)*(int *)(unaff_RDI[0x27] + 0xc);
                if (lVar5 == -1) {
                  bVar2 = true;
                  lVar5 = 0;
                }
                else {
                  lVar5 = *(longlong *)
                           (*(longlong *)(*(longlong *)(unaff_RDI[0x27] + 0x18) + 0x10) + lVar5 * 8)
                  ;
                  if (lVar5 == 0) {
                    lVar5 = 0;
                  }
                  else {
                    FUN_00d50b00();
                  }
                  bVar2 = false;
                }
                FUN_01e26120();
                if (local_38 == '\0') {
                  if (local_40 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                uVar9 = FUN_01e21f60();
                (**(code **)(*unaff_RDI + 0x6d8))(uVar9,3);
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                if (!bVar2 && lVar5 != 0) {
                  FUN_00d50b20();
                }
                goto LAB_01e21205;
              }
              uVar7 = uVar7 + 1;
              uVar10 = param_2;
            } while (iVar4 != (int)uVar7);
          }
          cVar3 = FUN_01e21b90();
          if (cVar3 != '\0') {
            return;
          }
          bVar2 = true;
          cVar3 = FUN_01e4ad60();
          if (cVar3 != '\0') {
LAB_01e211f9:
            (**(code **)(*unaff_RDI + 0x6e0))();
LAB_01e21205:
            bVar2 = true;
          }
        }
        else {
          iVar4 = FUN_01e21aa0();
          lVar5 = unaff_RDI[0x27];
          if (iVar4 == -1) {
            *(undefined4 *)(lVar5 + 0x10) = 0xffffffff;
            cVar3 = FUN_01e21b90();
            if (cVar3 != '\0') {
              return;
            }
LAB_01e2123d:
            (**(code **)(*unaff_RDI + 0x620))();
            iVar8 = iVar4;
          }
          else {
            iVar8 = iVar4;
            if (iVar4 != *(int *)(lVar5 + 0x10)) {
              iVar8 = -1;
              if (((longlong)*(int *)(lVar5 + 0xc) != -1) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x10) +
                   (longlong)*(int *)(lVar5 + 0xc) * 8) != 0)) {
                uVar9 = FUN_00d50b00();
                lVar5 = (longlong)*(int *)(unaff_RDI[0x27] + 0xc);
                if (lVar5 == -1) {
                  bVar2 = true;
LAB_01e215ea:
                  lVar5 = 0;
                }
                else {
                  lVar5 = *(longlong *)
                           (*(longlong *)(*(longlong *)(unaff_RDI[0x27] + 0x18) + 0x10) + lVar5 * 8)
                  ;
                  if (lVar5 == 0) {
                    bVar2 = false;
                    goto LAB_01e215ea;
                  }
                  uVar9 = FUN_00d50b00();
                  bVar2 = false;
                }
                uVar9 = FUN_01e26090(uVar9,iVar4);
                if (local_40 == 0) {
                  cVar3 = '\0';
                }
                else {
                  lVar6 = (longlong)*(int *)(unaff_RDI[0x27] + 0xc);
                  if (lVar6 == -1) {
                    bVar1 = true;
                    lVar6 = 0;
                  }
                  else {
                    lVar6 = *(longlong *)
                             (*(longlong *)(*(longlong *)(unaff_RDI[0x27] + 0x18) + 0x10) +
                             lVar6 * 8);
                    if (lVar6 == 0) {
                      lVar6 = 0;
                    }
                    else {
                      uVar9 = FUN_00d50b00();
                    }
                    bVar1 = false;
                  }
                  FUN_01e26090(uVar9,iVar4);
                  cVar3 = FUN_01e26480();
                  if ((local_60 != '\0') && (local_68 != 0)) {
                    FUN_00d50b20();
                  }
                  if (!bVar1 && lVar6 != 0) {
                    FUN_00d50b20();
                  }
                }
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                if (!bVar2 && lVar5 != 0) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
                if (cVar3 != '\0') {
                  *(int *)(unaff_RDI[0x27] + 0x10) = iVar4;
                  goto LAB_01e2123d;
                }
              }
            }
          }
          bVar2 = true;
          cVar3 = FUN_01e4ad60();
          if (cVar3 != '\0') {
            if (iVar8 == -1) {
              (**(code **)(*unaff_RDI + 0x6e0))();
            }
            else {
              if ((*(int *)(unaff_RDI[0x27] + 0xc) == -1) ||
                 (*(int *)(unaff_RDI[0x27] + 0x10) == -1)) {
                local_60 = '\0';
                local_68 = 0;
              }
              else {
                FUN_01e26090();
              }
              uVar9 = FUN_01e26120();
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  uVar9 = FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              uVar9 = FUN_01e21df0(uVar9,iVar8);
              (**(code **)(*unaff_RDI + 0x6d8))(uVar9,3);
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
LAB_01e21440:
      (**(code **)(*unaff_RDI + 0x658))();
      lVar5 = *unaff_RSI;
      if (lVar5 == local_40) {
        if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
          if (local_38 != '\0') goto LAB_01e21493;
          FUN_00d50b00();
          goto LAB_01e214cd;
        }
LAB_01e214d3:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar6 = unaff_RSI[1];
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *unaff_RSI = local_40;
          if (((char)lVar6 != '\0') && (lVar5 != 0)) {
            FUN_00d50b20();
          }
LAB_01e214cd:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          goto LAB_01e214d3;
        }
        *unaff_RSI = local_40;
        if (((char)lVar6 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_01e21493:
        *(undefined1 *)(unaff_RSI + 1) = 1;
      }
      if (*unaff_RSI == 0) {
        return;
      }
      iVar4 = FUN_01d3a5a0();
      if ((((iVar4 == 6) && (iVar4 = FUN_01d3b630(), iVar4 == 2)) && (!bVar2)) &&
         ((char)unaff_RDI[0x28] == '\0')) {
        (**(code **)(*unaff_RDI + 0x658))();
        lVar5 = *unaff_RSI;
        if (lVar5 == local_40) {
          if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
            if (local_38 != '\0') goto LAB_01e2106e;
            FUN_00d50b00();
            goto LAB_01e215bd;
          }
LAB_01e215c3:
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar6 = unaff_RSI[1];
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *unaff_RSI = local_40;
            if (((char)lVar6 != '\0') && (lVar5 != 0)) {
              FUN_00d50b20();
            }
LAB_01e215bd:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            goto LAB_01e215c3;
          }
          *unaff_RSI = local_40;
          if (((char)lVar6 != '\0') && (lVar5 != 0)) {
            FUN_00d50b20();
          }
LAB_01e2106e:
          *(undefined1 *)(unaff_RSI + 1) = 1;
        }
        bVar2 = true;
      }
    } while (*unaff_RSI != 0);
  }
  return;
}


