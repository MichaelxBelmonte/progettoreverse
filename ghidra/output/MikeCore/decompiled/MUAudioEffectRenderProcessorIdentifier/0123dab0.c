// Function: FUN_0123dab0
// Address: 0123dab0
// Size: 1069 bytes
// Class: MUAudioEffectRenderProcessorIdentifier


void FUN_0123dab0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *unaff_RDI;
  undefined8 uVar3;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_88;
  char local_80;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  cVar1 = FUN_0124d450();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*unaff_RDI + 0x498))(), cVar1 != '\0')) {
    (**(code **)(*unaff_RDI + 0x478))();
    if (local_48 == 0) {
      cVar1 = '\0';
    }
    else {
      (**(code **)(*unaff_RDI + 0x478))();
      (**(code **)(*local_c8 + 0x370))();
      if (local_38 == 0) {
        cVar1 = '\0';
      }
      else {
        (**(code **)(*unaff_RDI + 0x478))();
        (**(code **)(*local_a8 + 0x370))();
        FUN_00b7e000();
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        cVar1 = (**(code **)(*local_b8 + 0x50))();
        if (local_88 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      (**(code **)(*unaff_RDI + 0x478))();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_00b810f0();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_0123b010();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*unaff_RDI + 0x478))();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      uVar2 = (**(code **)(*unaff_RDI + 0x380))();
      uVar3 = (**(code **)(*unaff_RDI + 0x370))();
      (**(code **)(*unaff_RDI + 0x378))();
      FUN_00b80910(uVar3,uVar2);
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_0123b010();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*param_1 + 0x18))(DAT_02390124);
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


