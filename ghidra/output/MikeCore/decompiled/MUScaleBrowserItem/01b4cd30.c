// Function: FUN_01b4cd30
// Address: 01b4cd30
// Size: 799 bytes
// Class: MUScaleBrowserItem


/* WARNING: Removing unreachable block (ram,0x01b4ce4d) */
/* WARNING: Removing unreachable block (ram,0x01b4ce56) */

ulonglong FUN_01b4cd30(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  longlong local_a8;
  char local_a0;
  longlong local_88;
  char local_80;
  longlong *local_40;
  char local_38;
  
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
  if (cVar3 != '\0') {
    plVar1 = (longlong *)*unaff_RDI;
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    uVar4 = (**(code **)(*plVar1 + 0x50))();
    uVar6 = (ulonglong)uVar4;
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != '\0') {
      if (local_88 != 0) {
        FUN_00d50b20();
        return uVar6;
      }
      return uVar6;
    }
    return uVar6;
  }
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
  if (cVar3 != '\0') {
    (**(code **)(*(longlong *)*unaff_RSI + 1000))();
    if (local_80 == '\0') {
      if (local_88 == 0) {
        return 0;
      }
      FUN_00d50b00();
    }
    else if (local_88 == 0) {
      return 0;
    }
    if (0 < *(int *)(local_88 + 0xc)) {
      lVar7 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(local_88 + 0x10) + lVar7 * 8);
        cVar3 = (**(code **)(*plVar1 + 0x3a0))();
        if (cVar3 == '\0') {
          (**(code **)(*plVar1 + 0x370))();
          FUN_017a9f30();
          if (local_a0 == '\0') {
            if (local_a8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          cVar3 = (**(code **)(*local_40 + 0x50))();
          if (local_a8 != 0) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') goto LAB_01b4cf91;
        }
        else {
LAB_01b4cf91:
          plVar2 = (longlong *)*unaff_RDI;
          (**(code **)(*plVar1 + 0x390))();
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          uVar5 = (**(code **)(*plVar2 + 0x50))();
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar5 != '\0') {
            FUN_00115910();
            FUN_00d50b20();
            return CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
          }
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(local_88 + 0xc));
    }
    FUN_00115910();
    FUN_00d50b20();
  }
  return 0;
}


