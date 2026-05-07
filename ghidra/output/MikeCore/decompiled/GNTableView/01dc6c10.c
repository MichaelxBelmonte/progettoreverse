// Function: FUN_01dc6c10
// Address: 01dc6c10
// Size: 1911 bytes
// Class: GNTableView


/* WARNING: Removing unreachable block (ram,0x01dc6e6c) */
/* WARNING: Removing unreachable block (ram,0x01dc6e63) */
/* WARNING: Removing unreachable block (ram,0x01dc7305) */
/* WARNING: Removing unreachable block (ram,0x01dc730e) */
/* WARNING: Removing unreachable block (ram,0x01dc6e01) */
/* WARNING: Removing unreachable block (ram,0x01dc6e0a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01dc6c10(undefined8 param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar8;
  bool bVar9;
  longlong local_78;
  char local_70;
  longlong *local_40;
  char local_38;
  
  plVar5 = local_40;
  lVar4 = DAT_027f27a8;
  lVar1 = DAT_027f27a0;
  if ((char)unaff_RSI[0x29] == '\0') {
    if (param_2 == 1) {
      if (DAT_027f27a8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    else if (param_2 == 0) {
      if (DAT_027f27a0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
  }
  else {
    if ((DAT_028b8a68 == (undefined8 *)0x0) || (DAT_028b8a71 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028b8a68 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028b8a68 == puVar6) {
          bVar3 = false;
          bVar2 = false;
        }
        else {
          bVar3 = true;
          bVar2 = true;
          bVar9 = DAT_028b8a68 != (undefined8 *)0x0;
          DAT_028b8a68 = puVar6;
          if (bVar9) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b8a70 == '\0') {
          DAT_028b8a70 = '\x01';
          FUN_00e8cb90();
          bVar2 = bVar3;
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RSI + 0x640))();
        if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        iVar8 = 0;
        do {
          plVar7 = (longlong *)FUN_00e8fc40();
          FUN_00152930();
          (**(code **)(*plVar7 + 0x18))();
          FUN_01d4eaa0(_DAT_0241f410);
          FUN_01d52700();
          FUN_01d52740();
          FUN_01d48b40(DAT_02390124);
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01d52740();
          (**(code **)(*plVar5 + 0x390))();
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          FUN_01d488d0();
          if (local_78 != 0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar8 == 0) {
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d34,DAT_023b36b0,DAT_02390d34);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d2c,DAT_02390d30,DAT_02390d2c);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d30,DAT_023908ec,DAT_02390d30);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_023b36b0,DAT_02390d2c,DAT_023b36b0);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (iVar8 == 1) {
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d34,DAT_02390d2c,DAT_02390d34);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d2c,DAT_02390d30,DAT_02390d2c);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d30,DAT_023b36b0,DAT_02390d30);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_023b36b0,DAT_023908ec,DAT_023b36b0);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (iVar8 == 2) {
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d34,DAT_023908ec,DAT_02390d34);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d2c,DAT_023b36b0,DAT_02390d2c);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d30,DAT_02390d30,DAT_02390d30);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_023b36b0,DAT_02390d2c,DAT_023b36b0);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_01d52770();
          local_38 = '\0';
          FUN_00d21140();
          FUN_00d50b20();
          iVar8 = iVar8 + 1;
          local_40 = plVar7;
        } while (iVar8 != 3);
        FUN_00d50b20();
        DAT_028b8a71 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028b8a71 = '\x01';
        FUN_00e8cb70();
      }
    }
    if ((param_2 < -1) || (*(int *)((longlong)DAT_028b8a68 + 0xc) <= (int)(param_2 + 1U))) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      lVar1 = *(longlong *)(DAT_028b8a68[2] + (ulonglong)(param_2 + 1U) * 8);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
  }
  return unaff_RDI;
}


