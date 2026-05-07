// Function: FUN_00e37290
// Address: 00e37290
// Size: 924 bytes
// Class: GNUni


void FUN_00e37290(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  byte local_51;
  longlong local_50;
  char local_48 [15];
  undefined1 local_39;
  char local_38 [8];
  
  lVar1 = DAT_027e7c60;
  if (DAT_027e7c60 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_a0 = lVar1;
  local_98 = '\x01';
  uVar5 = FUN_000175c0(param_1,&local_a0);
  lVar1 = local_50;
  pcVar3 = local_38;
  if (local_48[0] != '\0') {
    pcVar3 = local_48;
  }
  local_38[0] = local_48[0];
  *pcVar3 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar4 = DAT_027864f8;
  if (DAT_027864f8 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_90 = lVar4;
  local_88 = '\x01';
  FUN_000175c0(uVar5,&local_90);
  lVar4 = local_50;
  if (local_48[0] == '\0') {
    if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48[0] = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  local_39 = 1;
  local_60 = lVar4;
  FUN_00ca1340();
  local_60 = lVar4;
  FUN_00dee5a0(DAT_023908c8);
  if (lVar4 == 0) {
    local_60 = lVar4;
  }
  else {
    local_39 = 1;
    local_60 = 0;
    FUN_00d50b20();
  }
  local_51 = lVar4 != 0;
  local_39 = lVar4 == 0;
  do {
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x368))();
    iVar2 = FUN_00e31390();
    if ((iVar2 != 0) ||
       (*(int *)(lVar1 + 0x10) <
        (*(int *)(lVar1 + 0x14) + *(int *)(*(longlong *)(lVar1 + 0x20) + 0xc)) -
        *(int *)(*(longlong *)(lVar1 + 0x48) + 0xc))) {
      FUN_00da5ad0();
      lVar4 = local_70;
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_50 = lVar4;
      local_48[0] = '\0';
      FUN_00d23d90();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x378))();
      local_51 = local_51 | local_60 == 0;
      if (local_51 == 0) {
        FUN_00d50b20();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      return;
    }
    FUN_00e37a10();
    lVar4 = local_50;
    if (local_48[0] == '\0') {
      if (local_50 == 0) goto LAB_00e374c0;
      FUN_00d50b00();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_50 == 0) {
LAB_00e374c0:
      if (((((*(int *)(lVar1 + 0x14) + *(int *)(*(longlong *)(lVar1 + 0x20) + 0xc)) -
             *(int *)(*(longlong *)(lVar1 + 0x48) + 0xc) <= *(int *)(lVar1 + 0x10)) &&
           (FUN_00e37a10(), local_50 != 0)) && (lVar4 = local_50, local_48[0] == '\0')) &&
         ((FUN_00d50b00(), local_48[0] != '\0' && (local_50 != 0)))) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x378))();
    if (lVar4 == 0) {
      FUN_00dee5a0(DAT_023908c8);
    }
    else {
      FUN_00e37ab0();
      local_80 = lVar1;
      local_78 = '\0';
      FUN_00e338f0();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00e31690();
    }
  } while( true );
}


