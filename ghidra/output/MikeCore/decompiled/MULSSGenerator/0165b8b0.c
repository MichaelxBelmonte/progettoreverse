// Function: FUN_0165b8b0
// Address: 0165b8b0
// Size: 860 bytes
// Class: MULSSGenerator


void FUN_0165b8b0(ulonglong param_1,undefined8 param_2,char param_3)

{
  ulonglong uVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  pthread_key_t pVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  char *pcVar9;
  longlong lVar10;
  longlong unaff_RDI;
  undefined4 local_5c;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar7 = param_1;
  local_58 = param_1;
  FUN_0123ff10();
  FUN_0123ff30();
  pVar6 = (pthread_key_t)uVar7;
  if (param_1 >> 0x20 == 0) {
    lVar10 = *(longlong *)(unaff_RDI + 0x40);
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      lVar10 = *(longlong *)(unaff_RDI + 0x40);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    pVar6 = (pthread_key_t)uVar7;
    if (*(int *)(*(longlong *)(lVar10 + 0x48) + 0x18) + 7U < 0xf) {
      FUN_00d23310();
      uVar1 = local_48;
      pVar6 = (pthread_key_t)CONCAT71((int7)(uVar7 >> 8),local_40[0]);
      puVar8 = &local_50;
      if (local_40[0] != '\0') {
        puVar8 = (ulonglong *)local_40;
      }
      local_50 = CONCAT71(local_50._1_7_,local_40[0]);
      *(char *)puVar8 = '\0';
      if ((local_40[0] != '\0') && (uVar1 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (uVar1 != 0)) {
        FUN_00d50b20();
      }
      if (uVar1 == 0) {
        local_58 = FUN_00e7bdb0();
        goto LAB_0165b999;
      }
    }
    local_58 = FUN_0165be20();
  }
LAB_0165b999:
  lVar10 = *(longlong *)(unaff_RDI + 0x40);
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    lVar10 = *(longlong *)(unaff_RDI + 0x40);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  if (*(int *)(*(longlong *)(lVar10 + 0x48) + 0x18) + 7U < 0xf) {
    FUN_00d23310();
    uVar7 = local_48;
    puVar8 = &local_50;
    if (local_40[0] != '\0') {
      puVar8 = (ulonglong *)local_40;
    }
    local_50 = CONCAT71(local_50._1_7_,local_40[0]);
    *(char *)puVar8 = '\0';
    if ((local_40[0] != '\0') && (uVar7 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (uVar7 != 0)) {
      FUN_00d50b20();
    }
    if (uVar7 == 0) goto LAB_0165bb6d;
  }
  local_5c = 0xffffffff;
  local_50 = FUN_0165bfa0(&local_5c,1);
  if (((local_50 >> 0x20 == 0) || (local_58._4_4_ == 0)) || (cVar2 = FUN_00e7c000(), cVar2 == '\0'))
  {
    if (param_3 == '\0') {
      local_58 = local_50;
    }
    else {
      FUN_0165c0f0(0,local_50,0,&local_5c);
      uVar7 = local_48;
      pcVar9 = local_38;
      if (local_40[0] != '\0') {
        pcVar9 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar9 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_48 = local_58;
      FUN_00e7b970();
      FUN_0123ff00();
      FUN_0123fc50();
      uVar1 = local_48;
      if (((local_40[0] == '\0') && (local_48 != 0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != 0)))) {
        FUN_00d50b20();
      }
      FUN_0165b1b0(local_58,local_50,1);
      if (uVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (uVar7 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_0165bb6d:
  FUN_0123fbe0();
  uVar7 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  uVar1 = local_58;
  uVar5 = FUN_00e7bdb0();
  FUN_0165b1b0(uVar5,uVar1,0);
  if (uVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}


