// Function: FUN_0153dae0
// Address: 0153dae0
// Size: 725 bytes
// Class: Unknown


int FUN_0153dae0(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  pthread_key_t pVar10;
  char *pcVar11;
  int iStack_54;
  undefined8 local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  lVar1 = local_50;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_017dddb0();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar5 = FUN_017dddb0();
  if ((iVar4 == 0) && (iVar5 != 0)) {
    return 1;
  }
  if ((iVar4 != 0) && (iVar5 == 0)) {
    return -1;
  }
  if (iVar4 != iVar5) {
    return (uint)(iVar5 <= iVar4) + (uint)(iVar5 <= iVar4) + -1;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017db850();
  local_40[0] = local_48[0];
  pcVar7 = local_40;
  if (local_48[0] != '\0') {
    pcVar7 = local_48;
  }
  *pcVar7 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017db850();
  pcVar7 = local_38;
  pcVar11 = local_48;
  if (local_48[0] == '\0') {
    pcVar11 = pcVar7;
  }
  local_38[0] = local_48[0];
  *pcVar11 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pVar10 = (pthread_key_t)pcVar7;
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_01508620();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_01508620();
  if (uVar8 >> 0x20 != 0) {
    local_50._4_4_ = (int)(uVar8 >> 0x20);
    if (uVar9 >> 0x20 != 0) {
      cVar2 = FUN_00e7c000();
      iVar4 = 0;
      if (cVar2 != '\0') goto LAB_0153dd0e;
      if (local_50._4_4_ == 0) goto LAB_0153dd08;
    }
    iStack_54 = (int)(uVar9 >> 0x20);
    if (iStack_54 != 0) {
      cVar2 = FUN_00e7c000();
      iVar4 = 0;
      if (cVar2 != '\0') goto LAB_0153dd0e;
      if (local_50._4_4_ != 0) {
        iVar4 = 1;
        if (iStack_54 != 0) {
          bVar3 = FUN_00e7c020();
          iVar4 = (uint)(bVar3 ^ 1) + (uint)(bVar3 ^ 1) + -1;
        }
        goto LAB_0153dd0e;
      }
    }
  }
LAB_0153dd08:
  iVar4 = 1;
LAB_0153dd0e:
  if ((local_38[0] != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return iVar4;
}


