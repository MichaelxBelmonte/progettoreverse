// Function: FUN_016db1f0
// Address: 016db1f0
// Size: 2293 bytes
// Class: Unknown


void FUN_016db1f0(int param_1,longlong *param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  ulonglong local_48;
  char local_40;
  undefined4 local_34;
  
  local_50 = param_2;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar6 = 0x25683c0;
  *puVar3 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  if (param_3 == 0) {
    if (0xb < param_1 - 2U) goto switchD_016db294_caseD_5;
    pVar6 = (&switchD_016db294::switchdataD_016dbbcc)[param_1 - 2U] + 0x16dbbcc;
    switch(param_1) {
    case 2:
      uVar2 = *(ulonglong *)(*local_50 + 0x14);
      pVar6 = (pthread_key_t)(uVar2 >> 0x20);
      if (uVar2 >> 0x20 == 0) {
        FUN_00e7bdb0();
      }
      else {
        local_34 = 1;
        local_48 = uVar2;
        FUN_00e7c280();
      }
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_0165d690();
      lVar7 = (longlong)*(int *)(puVar3 + 3);
      FUN_00c8e340();
      break;
    case 3:
      goto switchD_016db294_caseD_3;
    case 4:
      goto switchD_016db294_caseD_4;
    default:
      goto switchD_016db294_caseD_5;
    case 8:
    case 0xb:
      if (*(ulonglong *)(*local_50 + 0xc) >> 0x20 == 0) {
        FUN_00e7bdb0();
      }
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_0165d690();
      lVar7 = (longlong)*(int *)(puVar3 + 3);
      FUN_00c8e340();
      break;
    case 9:
      goto switchD_016db294_caseD_9;
    case 10:
    case 0xd:
      local_48 = *(ulonglong *)(*local_50 + 0x14);
      pVar6 = (pthread_key_t)(local_48 >> 0x20);
      if (local_48 >> 0x20 == 0) {
        local_48 = FUN_00e7bdb0();
      }
      else {
        local_34 = 1;
        FUN_00e7c280();
      }
      local_34 = 1;
      FUN_00e7c260();
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_0165d690();
      lVar7 = (longlong)*(int *)(puVar3 + 3);
      FUN_00c8e340();
    }
  }
  else if (param_1 == 3) {
switchD_016db294_caseD_3:
    uVar2 = *(ulonglong *)(*local_50 + 0x14);
    pVar6 = (pthread_key_t)(uVar2 >> 0x20);
    if (uVar2 >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    else {
      local_34 = 1;
      local_48 = uVar2;
      FUN_00e7c280();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_0165d690();
    iVar1 = *(int *)(puVar3 + 3);
    FUN_00c8e340();
    *(undefined8 *)(puVar3[2] + (longlong)iVar1) = uVar5;
    uVar2 = *(ulonglong *)(*local_50 + 0x14);
    pVar6 = (pthread_key_t)(uVar2 >> 0x20);
    if (uVar2 >> 0x20 == 0) {
      local_48 = FUN_00e7bdb0();
    }
    else {
      local_34 = 1;
      local_48 = uVar2;
      FUN_00e7c280();
    }
    local_34 = 1;
    FUN_00e7c260();
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_0165d690();
    lVar7 = (longlong)*(int *)(puVar3 + 3);
    FUN_00c8e340();
  }
  else if (param_1 == 4) {
switchD_016db294_caseD_4:
    if (*(ulonglong *)(*local_50 + 0xc) >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_0165d690();
    iVar1 = *(int *)(puVar3 + 3);
    FUN_00c8e340();
    *(undefined8 *)(puVar3[2] + (longlong)iVar1) = uVar5;
    uVar2 = *(ulonglong *)(*local_50 + 0x14);
    pVar6 = (pthread_key_t)(uVar2 >> 0x20);
    if (uVar2 >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    else {
      local_34 = 1;
      local_48 = uVar2;
      FUN_00e7c280();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_0165d690();
    iVar1 = *(int *)(puVar3 + 3);
    FUN_00c8e340();
    *(undefined8 *)(puVar3[2] + (longlong)iVar1) = uVar5;
    if (param_3 != 1) goto switchD_016db294_caseD_5;
    uVar2 = *(ulonglong *)(*local_50 + 0x14);
    pVar6 = (pthread_key_t)(uVar2 >> 0x20);
    if (uVar2 >> 0x20 == 0) {
      local_48 = FUN_00e7bdb0();
    }
    else {
      local_34 = 1;
      local_48 = uVar2;
      FUN_00e7c280();
    }
    local_34 = 1;
    FUN_00e7c260();
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_0165d690();
    lVar7 = (longlong)*(int *)(puVar3 + 3);
    FUN_00c8e340();
  }
  else {
    if (param_1 != 9) goto switchD_016db294_caseD_5;
switchD_016db294_caseD_9:
    if (*(ulonglong *)(*local_50 + 0xc) >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_0165d690();
    iVar1 = *(int *)(puVar3 + 3);
    FUN_00c8e340();
    *(undefined8 *)(puVar3[2] + (longlong)iVar1) = uVar5;
    local_48 = *(ulonglong *)(*local_50 + 0x14);
    pVar6 = (pthread_key_t)(local_48 >> 0x20);
    if (local_48 >> 0x20 == 0) {
      local_48 = FUN_00e7bdb0();
    }
    else {
      local_34 = 1;
      FUN_00e7c280();
    }
    local_34 = 1;
    FUN_00e7c260();
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_0165d690();
    lVar7 = (longlong)*(int *)(puVar3 + 3);
    FUN_00c8e340();
  }
  *(undefined8 *)(puVar3[2] + lVar7) = uVar5;
switchD_016db294_caseD_5:
  if (*(longlong *)(unaff_RSI + 0x78) != 0) {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = 0;
    lVar7 = *(longlong *)(unaff_RSI + 0x78);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    pVar6 = 0;
    local_60 = lVar7;
    FUN_01900ec0(0,&local_60);
    uVar2 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (uVar2 != 0) {
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_68 = 0;
      lVar7 = *(longlong *)(unaff_RSI + 0x78);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      pVar6 = 0;
      local_70 = lVar7;
      FUN_01900ec0(0,&local_70);
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_019079b0();
      iVar1 = *(int *)(puVar3 + 3);
      FUN_00c8e340();
      *(undefined8 *)(puVar3[2] + (longlong)iVar1) = uVar5;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


