// Function: FUN_01a675b0
// Address: 01a675b0
// Size: 812 bytes
// Class: MUTool


void FUN_01a675b0(ulonglong param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  if (*(longlong *)(unaff_RSI + 0x1f8) == 0) {
    bVar1 = false;
    lVar8 = 0;
  }
  else if (param_1 >> 0x20 == 0) {
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    pVar5 = (pthread_key_t)param_1;
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01252670(0,1,0,0);
    lVar8 = local_58;
    pcVar7 = local_38;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 == 0) {
      bVar2 = false;
      bVar1 = false;
    }
    else {
      bVar2 = true;
      bVar1 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_40 != '\0') && (bVar1 = bVar2, local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar6 = param_1;
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    pVar5 = (pthread_key_t)uVar6;
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012521f0(param_1,0,0,0);
    lVar8 = local_58;
    pcVar7 = local_38;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 == 0) {
      bVar2 = false;
      bVar1 = false;
    }
    else {
      bVar2 = true;
      bVar1 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_40 != '\0') && (bVar1 = bVar2, local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_0171b9c0();
  local_78 = *param_2;
  local_70 = '\0';
  local_60 = '\0';
  local_68 = lVar8;
  FUN_0171c6b0(&local_68,&local_78);
  lVar3 = local_58;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_50[0] == '\0') {
    if (local_58 == 0) {
      *unaff_RDI = 0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    *unaff_RDI = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    local_50[0] = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return;
}


