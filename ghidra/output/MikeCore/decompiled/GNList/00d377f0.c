// Function: FUN_00d377f0
// Address: 00d377f0
// Size: 2079 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d37822) */
/* WARNING: Removing unreachable block (ram,0x00d3782b) */
/* WARNING: Removing unreachable block (ram,0x00d37ff8) */
/* WARNING: Removing unreachable block (ram,0x00d38005) */

void FUN_00d377f0(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  uint *puVar13;
  longlong lVar14;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar16;
  longlong local_60;
  char local_58;
  longlong local_50;
  longlong local_40;
  char cStack_38;
  
  FUN_00d50f50();
  cVar7 = (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
  local_60 = DAT_0277d7d0;
  if (cVar7 != '\0') {
    plVar2 = (longlong *)*unaff_RSI;
    uVar16 = extraout_XMM0_Qa;
    if (DAT_0277d7d0 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_58 = '\x01';
    (**(code **)(*plVar2 + 0x578))(uVar16,&local_60);
    if ((cStack_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    lVar12 = *(longlong *)(unaff_RDI + 0x28);
    uVar1 = *(uint *)(lVar12 + 0x18);
    local_50 = local_40;
    if (0x2f < (int)uVar1) {
      lVar14 = 0;
      lVar15 = 0;
      do {
        lVar12 = *(longlong *)(lVar12 + 0x10);
        lVar3 = *(longlong *)(*(longlong *)(local_50 + 0x10) + lVar14);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        puVar13 = &switchD_00d37921::switchdataD_00d380f4;
        uVar5 = local_40._4_4_;
        lVar6 = local_40;
        switch(*(undefined1 *)(lVar12 + 0x28 + lVar15)) {
        case 0x40:
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) == '@') {
            lVar4 = *(longlong *)(lVar12 + 0x18 + lVar15);
            lVar6 = lVar3;
            if (lVar4 != lVar3) {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
              *(longlong *)(lVar12 + 0x18 + lVar15) = lVar3;
              if (lVar4 != 0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            iVar11 = FUN_00e82730();
            local_40 = lVar3;
LAB_00d37f8b:
            _memcpy(puVar13,(void *)(longlong)iVar11,param_3);
            lVar6 = local_40;
          }
          break;
        case 0x43:
          local_40 = FUN_00dd63c0();
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(longlong *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x45:
          local_40 = FUN_00dd6b50();
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x10 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(longlong *)(lVar12 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(lVar12 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x49:
          uVar10 = FUN_00d45870();
          local_40 = CONCAT44(uVar5,uVar10);
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(longlong *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x50:
          local_40 = FUN_00dd6bf0();
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(longlong *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x52:
          local_40 = FUN_00dd6ab0();
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x10 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(longlong *)(lVar12 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(lVar12 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x5e:
          uVar10 = FUN_00d45870();
          local_40 = CONCAT44(uVar5,uVar10);
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(longlong *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x62:
          uVar8 = FUN_00d45ad0();
          local_40 = CONCAT71(local_40._1_7_,uVar8);
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(longlong *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 99:
          uVar8 = FUN_00dd6290();
          local_40 = CONCAT71(local_40._1_7_,uVar8);
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(longlong *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 100:
          local_40 = FUN_00d45bc0();
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(longlong *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x66:
          uVar10 = FUN_00d459e0();
          local_40 = CONCAT44(uVar5,uVar10);
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(longlong *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x69:
          uVar10 = FUN_00d460c0();
          local_40 = CONCAT44(uVar5,uVar10);
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(longlong *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x6c:
          local_40 = FUN_00d45790();
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(longlong *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x71:
          local_40 = FUN_00dd6320();
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(longlong *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          break;
        case 0x73:
          uVar9 = FUN_00d460c0();
          local_40 = CONCAT62(local_40._2_6_,uVar9);
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
          if (*(char *)(lVar12 + 0x28 + lVar15) != '@') {
            iVar11 = FUN_00e82730();
            goto LAB_00d37f8b;
          }
          lVar4 = *(longlong *)(lVar12 + 0x18 + lVar15);
          lVar6 = local_40;
          if (lVar4 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(lVar12 + 0x18 + lVar15) = local_40;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
        }
        local_40 = lVar6;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((ulonglong)(uVar1 / 0x18 - 1) * 0x18 + -0x18 == lVar15) goto LAB_00d37fc5;
        lVar12 = *(longlong *)(unaff_RDI + 0x28);
        lVar15 = lVar15 + 0x18;
        lVar14 = lVar14 + 8;
      } while( true );
    }
    if (local_40 != 0) {
LAB_00d37fc5:
      FUN_00d50b20();
    }
  }
  return;
}


