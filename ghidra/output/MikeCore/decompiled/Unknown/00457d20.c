// Function: FUN_00457d20
// Address: 00457d20
// Size: 586 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00457f66) */
/* WARNING: Removing unreachable block (ram,0x00457f6f) */
/* WARNING: Removing unreachable block (ram,0x00457dfa) */
/* WARNING: Removing unreachable block (ram,0x00457e03) */

void FUN_00457d20(void)

{
  char cVar1;
  longlong *unaff_RDI;
  longlong lVar2;
  longlong *local_90;
  char local_88;
  longlong local_70;
  char local_68;
  longlong *local_50;
  char local_48;
  int local_38;
  
  if (((int)unaff_RDI[0xe] == 0) && (cVar1 = (**(code **)(*unaff_RDI + 0x4a0))(), cVar1 != '\0')) {
    FUN_00457500();
    if (local_48 == '\0') {
      if (local_50 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_50 == (longlong *)0x0) {
      return;
    }
    lVar2 = local_50[2];
    local_38 = 0;
    if (0 < *(int *)(lVar2 + 0xc)) {
      do {
        FUN_0052f190();
        FUN_004580f0();
        if (local_68 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        (**(code **)(*local_90 + 0x688))();
        if (local_70 != 0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_38 = local_38 + 1;
      } while (local_38 < *(int *)(lVar2 + 0xc));
    }
    FUN_00d50b20();
  }
  else {
    lVar2 = unaff_RDI[0xc];
    if ((lVar2 != 0) || (lVar2 = unaff_RDI[6], lVar2 != 0)) {
      FUN_00d50b00();
    }
    FUN_0052f190();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_50 != (longlong *)0x0) {
      FUN_0052f190();
      (**(code **)(*local_50 + 0x688))();
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


