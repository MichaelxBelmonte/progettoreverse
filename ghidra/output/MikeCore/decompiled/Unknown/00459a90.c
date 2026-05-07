// Function: FUN_00459a90
// Address: 00459a90
// Size: 636 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00459cf9) */
/* WARNING: Removing unreachable block (ram,0x00459d09) */

void FUN_00459a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong local_a8;
  char local_a0;
  longlong in_stack_ffffffffffffff68;
  longlong *plVar6;
  char local_90;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar4 = *(longlong **)(unaff_RDI + 0x60);
  if ((plVar4 != (longlong *)0x0) ||
     (plVar4 = *(longlong **)(unaff_RDI + 0x30), plVar4 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01f27fe0();
  uVar5 = FUN_00324f60();
  local_40 = local_60;
  local_38 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_38 = '\x01';
  FUN_000c4290(uVar5,&local_40);
  if ((local_90 == '\0') && (in_stack_ffffffffffffff68 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (in_stack_ffffffffffffff68 != 0) {
    if (0 < *(int *)(in_stack_ffffffffffffff68 + 0xc)) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(in_stack_ffffffffffffff68 + 0x10) + lVar3 * 8);
        plVar6 = plVar1;
        cVar2 = FUN_00518a70();
        if ((cVar2 != '\0') && (cVar2 = (**(code **)(*plVar1 + 0x390))(), cVar2 != '\0')) {
          if (plVar1 == plVar4) {
            local_50 = *unaff_RSI;
            uVar5 = DAT_02390124;
          }
          else {
            local_50 = 0;
            uVar5 = 0;
          }
          local_48 = '\0';
          local_68 = '\0';
          local_70 = 0;
          FUN_0051d3f0(uVar5,&local_70,param_3,param_4,plVar6);
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 == plVar4) {
            if (local_50 != 0 && local_48 != '\0') {
              FUN_00d50b20();
            }
          }
          else if (local_50 != 0 && local_48 != '\0') {
            FUN_00d50b20();
          }
        }
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < *(int *)(in_stack_ffffffffffffff68 + 0xc));
    }
    FUN_0015ee90();
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


