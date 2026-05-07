// Function: FUN_000ba700
// Address: 000ba700
// Size: 821 bytes
// Class: MDMetaWindowController


void FUN_000ba700(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0xa00))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_000ba75e;
    }
  }
  else if (local_40 != 0) {
LAB_000ba75e:
    FUN_000be210();
    FUN_00e86210();
    lVar3 = DAT_026dc288;
    if (DAT_026dc288 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar3 = FUN_00e8b990();
    if (lVar3 == 0) {
      local_78 = 0;
      (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
      FUN_00d50b00();
      local_78 = '\x01';
      local_80 = (longlong *)(unaff_RDI + 0x10);
      FUN_00cbb340();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        (**(code **)(*local_80 + 0x10))();
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      local_58 = 0;
      (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
      FUN_00d50b00();
      local_58 = '\x01';
      local_60 = (longlong *)(unaff_RDI + 0x10);
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cade0();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      local_90 = lVar1;
      local_88 = '\0';
      FUN_00cbadd0(&local_90,&local_50);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        (**(code **)(*local_60 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return;
  }
  local_68 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
  FUN_00d50b00();
  local_68 = '\x01';
  local_70 = (longlong *)(unaff_RDI + 0x10);
  FUN_00cbb340();
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
  return;
}


