// Function: FUN_00f370f0
// Address: 00f370f0
// Size: 1156 bytes
// Class: Unknown


undefined8 FUN_00f370f0(uint *param_1,uint *param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 *local_res8;
  
  iVar5 = FUN_00f425b0();
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (local_res8 != (undefined4 *)0x0) {
    *local_res8 = 0;
  }
  uVar7 = FUN_00f42690();
  if ((int)uVar7 == 0) {
    if (param_3 == (undefined4 *)0x0) {
      iVar6 = FUN_00f425b0();
      uVar7 = 0;
      if (iVar5 < iVar6) {
        if (local_res8 == (undefined4 *)0x0) {
          do {
            puVar8 = (undefined4 *)FUN_00f42780();
            switch(*puVar8) {
            case 0:
              plVar2 = *(longlong **)(puVar8 + 2);
              if (*plVar2 == -3) {
                uVar4 = plVar2[1];
                if (-1 < (longlong)uVar4) {
                  if (param_2 != (uint *)0x0) {
                    uVar10 = 0;
                    uVar1 = *param_2;
                    while (-1 < (int)uVar1) {
                      if (uVar4 == uVar1) goto LAB_00f37561;
                      lVar3 = uVar10 + 1;
                      uVar10 = uVar10 + 1;
                      uVar1 = param_2[lVar3];
                    }
                    param_2[uVar10 & 0xffffffff] = (uint)uVar4;
                    param_2[(uVar10 & 0xffffffff) + 1] = 0xffffffff;
                  }
LAB_00f37561:
                  if (param_4 != (int *)0x0) {
                    *param_4 = *param_4 + 1;
                  }
                }
              }
              else if ((*plVar2 == -2) && (param_1 != (uint *)0x0)) {
                *param_1 = *param_1 | *(uint *)(plVar2 + 1);
              }
              break;
            case 1:
              uVar7 = FUN_00f42690();
              if ((int)uVar7 != 0) {
                return uVar7;
              }
              goto LAB_00f37481;
            case 2:
              iVar6 = *(int *)(**(longlong **)(puVar8 + 2) + 0x10);
joined_r0x00f37518:
              if (iVar6 != 0) goto LAB_00f37481;
              break;
            case 3:
              if (*(int *)(**(longlong **)(puVar8 + 2) + 0x10) == 0) {
                iVar6 = *(int *)((*(longlong **)(puVar8 + 2))[1] + 0x10);
                goto joined_r0x00f37518;
              }
LAB_00f37481:
              uVar7 = FUN_00f42690();
              if ((int)uVar7 != 0) {
                return uVar7;
              }
            }
            iVar6 = FUN_00f425b0();
            uVar7 = 0;
          } while (iVar5 < iVar6);
        }
        else {
          do {
            puVar8 = (undefined4 *)FUN_00f42780();
            switch(*puVar8) {
            case 0:
              plVar2 = *(longlong **)(puVar8 + 2);
              lVar3 = *plVar2;
              if (lVar3 == -2) {
                if (param_1 != (uint *)0x0) {
                  *param_1 = *param_1 | *(uint *)(plVar2 + 1);
                }
              }
              else if (lVar3 == -3) {
                uVar4 = plVar2[1];
                if (-1 < (longlong)uVar4) {
                  if (param_2 != (uint *)0x0) {
                    uVar10 = 0;
                    uVar1 = *param_2;
                    while (-1 < (int)uVar1) {
                      if (uVar4 == uVar1) goto LAB_00f3744d;
                      lVar3 = uVar10 + 1;
                      uVar10 = uVar10 + 1;
                      uVar1 = param_2[lVar3];
                    }
                    param_2[uVar10 & 0xffffffff] = (uint)uVar4;
                    param_2[(uVar10 & 0xffffffff) + 1] = 0xffffffff;
                  }
LAB_00f3744d:
                  if (param_4 != (int *)0x0) {
                    *param_4 = *param_4 + 1;
                  }
                }
              }
              else if (lVar3 == -5) {
                *local_res8 = 1;
              }
              break;
            case 1:
              uVar7 = FUN_00f42690();
              if ((int)uVar7 != 0) {
                return uVar7;
              }
              goto LAB_00f37351;
            case 2:
              iVar6 = *(int *)(**(longlong **)(puVar8 + 2) + 0x10);
joined_r0x00f373ef:
              if (iVar6 != 0) goto LAB_00f37351;
              break;
            case 3:
              if (*(int *)(**(longlong **)(puVar8 + 2) + 0x10) == 0) {
                iVar6 = *(int *)((*(longlong **)(puVar8 + 2))[1] + 0x10);
                goto joined_r0x00f373ef;
              }
LAB_00f37351:
              uVar7 = FUN_00f42690();
              if ((int)uVar7 != 0) {
                return uVar7;
              }
            }
            iVar6 = FUN_00f425b0();
            uVar7 = 0;
          } while (iVar5 < iVar6);
        }
      }
    }
    else {
      do {
        iVar6 = FUN_00f425b0();
        if (iVar6 <= iVar5) {
          return 0;
        }
        puVar8 = (undefined4 *)FUN_00f42780();
        uVar7 = 0;
        uVar9 = 0;
        switch(*puVar8) {
        case 0:
          plVar2 = *(longlong **)(puVar8 + 2);
          lVar3 = *plVar2;
          uVar7 = uVar9;
          if (lVar3 == -5) {
            *param_3 = *(undefined4 *)plVar2[3];
            param_3[1] = *(undefined4 *)(plVar2[3] + 4);
            param_3[2] = *(undefined4 *)(plVar2[3] + 8);
            param_3[3] = *(undefined4 *)(plVar2[3] + 0xc);
            param_3[4] = *(undefined4 *)(plVar2[3] + 0x10);
            param_3[5] = *(undefined4 *)(plVar2[3] + 0x14);
            param_3[6] = *(undefined4 *)(plVar2[3] + 0x18);
            param_3[7] = *(undefined4 *)(plVar2[3] + 0x1c);
            param_3[8] = *(undefined4 *)(plVar2[3] + 0x20);
            if (local_res8 != (undefined4 *)0x0) {
              *local_res8 = 1;
            }
          }
          else if (lVar3 == -2) {
            if (param_1 != (uint *)0x0) {
              *param_1 = *param_1 | *(uint *)(plVar2 + 1);
            }
          }
          else if ((lVar3 == -3) && (uVar4 = plVar2[1], -1 < (longlong)uVar4)) {
            if (param_2 != (uint *)0x0) {
              uVar10 = 0;
              uVar1 = *param_2;
              while (-1 < (int)uVar1) {
                if (uVar4 == uVar1) goto LAB_00f37220;
                lVar3 = uVar10 + 1;
                uVar10 = uVar10 + 1;
                uVar1 = param_2[lVar3];
              }
              param_2[uVar10 & 0xffffffff] = (uint)uVar4;
              param_2[(uVar10 & 0xffffffff) + 1] = 0xffffffff;
            }
LAB_00f37220:
            if (param_4 != (int *)0x0) {
              *param_4 = *param_4 + 1;
            }
          }
          break;
        case 1:
          uVar7 = FUN_00f42690();
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          uVar7 = FUN_00f42690();
          break;
        case 2:
          iVar6 = *(int *)(**(longlong **)(puVar8 + 2) + 0x10);
joined_r0x00f37287:
          if (iVar6 != 0) goto LAB_00f3717d;
          break;
        case 3:
          if (*(int *)(**(longlong **)(puVar8 + 2) + 0x10) == 0) {
            iVar6 = *(int *)((*(longlong **)(puVar8 + 2))[1] + 0x10);
            goto joined_r0x00f37287;
          }
LAB_00f3717d:
          uVar7 = FUN_00f42690();
        }
      } while ((int)uVar7 == 0);
    }
  }
  return uVar7;
}


