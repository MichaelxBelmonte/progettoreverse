// Function: FUN_012902c0
// Address: 012902c0
// Size: 885 bytes
// Class: MUAudioSourceAttackItem


void FUN_012902c0(double param_1)

{
  void *pvVar1;
  char *pcVar2;
  pthread_key_t in_ECX;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong local_68;
  char local_60 [16];
  undefined8 local_50;
  undefined4 local_48;
  double local_40;
  char local_38 [8];
  
  local_40 = param_1;
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((((local_60[0] == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60[0] != '\0')) &&
     (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23340();
  local_38[0] = local_60[0];
  pcVar2 = local_60;
  if (local_60[0] == '\0') {
    pcVar2 = local_38;
  }
  *pcVar2 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar4 = (double)FUN_013faed0();
  if ((local_38[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23340();
  pcVar2 = local_60;
  if (local_60[0] == '\0') {
    pcVar2 = local_38;
  }
  local_38[0] = local_60[0];
  *pcVar2 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar5 = (double)FUN_013faf20();
  if ((local_38[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    local_60[0] = '\0';
    local_48 = 0;
    local_50 = 0;
    if (0 < *(int *)(local_68 + 0xc)) {
      iVar3 = 0;
      do {
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar6 = (double)FUN_013faed0();
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar7 = (double)FUN_013faf20();
        if (iVar3 == *(int *)(local_68 + 0xc) + -1) {
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013fae90(local_40);
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013faee0(local_40);
        }
        else {
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013fae90((dVar6 * local_40) / dVar4);
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013faee0((dVar7 * local_40) / dVar5);
        }
        iVar3 = iVar3 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar3);
      } while (iVar3 < *(int *)(local_68 + 0xc));
    }
    FUN_01a81420();
    FUN_00d50b20();
  }
  return;
}


