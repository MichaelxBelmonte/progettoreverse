// Function: FUN_01a67240
// Address: 01a67240
// Size: 557 bytes
// Class: MUTool


void FUN_01a67240(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong unaff_RSI;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(char *)(unaff_RSI + 0x202) != '\0') {
    uVar4 = param_1;
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    pVar3 = (pthread_key_t)uVar4;
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012521f0(param_1,0,0,0);
    lVar1 = local_48;
    pcVar5 = local_38;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (lVar1 != 0)) {
      FUN_00d50b00();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_0171b9c0();
      local_88 = *param_2;
      local_80 = '\0';
      local_78 = lVar1;
      local_70 = '\0';
      FUN_01720f20(&local_78,&local_88);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
  }
  FUN_0171b9c0();
  local_68 = *param_2;
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  FUN_01721000(&local_58,&local_68);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}


