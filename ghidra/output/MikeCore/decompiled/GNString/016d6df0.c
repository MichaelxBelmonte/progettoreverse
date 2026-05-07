// Function: FUN_016d6df0
// Address: 016d6df0
// Size: 694 bytes
// Class: GNString


void FUN_016d6df0(pthread_key_t param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  longlong *unaff_RSI;
  undefined8 uVar8;
  longlong local_80;
  char local_78 [8];
  longlong local_68;
  char local_60;
  longlong local_58;
  pthread_key_t local_50;
  undefined4 local_44;
  longlong local_40;
  char local_38 [8];
  
  local_44 = param_2;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar3 = FUN_0165be20();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165b800();
  if (*unaff_RSI != 0) {
    local_60 = '\0';
    local_68 = 0;
    local_58 = *(longlong *)(*unaff_RSI + 0x10);
    local_50 = 0;
    if (0 < *(int *)(local_58 + 0xc)) {
      do {
        local_68 = *(longlong *)(*(longlong *)(local_58 + 0x10) + (longlong)(int)local_50 * 8);
        FUN_01704240((longlong)(int)local_50,&local_68);
        local_38[0] = local_78[0];
        pcVar7 = local_38;
        pcVar4 = local_78;
        if (local_78[0] == '\0') {
          pcVar4 = pcVar7;
        }
        *pcVar4 = '\0';
        if ((local_78[0] != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        pVar6 = (pthread_key_t)pcVar7;
        local_40 = local_80;
        uVar8 = FUN_00d45bc0();
        FUN_0123ffd0();
        pvVar2 = _pthread_getspecific(pVar6);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar6 = 0;
        uVar5 = FUN_018fc1e0(uVar8,4);
        uVar8 = uVar5;
        if ((char)local_44 != '\0') {
          uVar8 = uVar3;
        }
        if (local_50 != 0) {
          uVar8 = uVar5;
        }
        FUN_0123fef0();
        uVar1 = FUN_0123ff00();
        pvVar2 = _pthread_getspecific(pVar6);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165b8b0(uVar8,uVar1,1);
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        param_1 = local_50 + 1;
        local_50 = param_1;
      } while ((int)param_1 < *(int *)(local_58 + 0xc));
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165bd00();
  FUN_016f28b0();
  return;
}


