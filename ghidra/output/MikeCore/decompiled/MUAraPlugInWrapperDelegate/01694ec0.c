// Function: FUN_01694ec0
// Address: 01694ec0
// Size: 1636 bytes
// Class: MUAraPlugInWrapperDelegate


void FUN_01694ec0(pthread_key_t param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  char *pcVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  if (*(longlong *)(unaff_RSI + 0x98) != 0) {
    FUN_0167ab60();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537ab0();
    iVar1 = *(int *)(local_58 + 0xc);
    if (local_50[0] != '\0') {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (iVar1 == 1) {
      FUN_0167ab60();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537ab0();
      FUN_00d23310();
      lVar7 = local_58;
      pVar5 = CONCAT31((int3)(param_1 >> 8),local_50[0]);
      pcVar6 = local_38;
      if (local_50[0] != '\0') {
        pcVar6 = local_50;
      }
      local_38[0] = local_50[0];
      *pcVar6 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 == 0) {
        lVar7 = 0;
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (local_38[0] == '\0') {
          FUN_00d50b00();
        }
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
        FUN_00d50b20();
      }
    }
    else if (*(int *)(*(longlong *)(unaff_RSI + 0xa8) + 0xc) == 0) {
      if (*(int *)(*(longlong *)(unaff_RSI + 0xb8) + 0xc) == 0) {
        if (*(int *)(*(longlong *)(unaff_RSI + 0xb0) + 0xc) == 0) goto LAB_016954cf;
        FUN_00d23310();
        lVar3 = local_58;
        pVar5 = CONCAT31((int3)(param_1 >> 8),local_50[0]);
        pcVar6 = local_38;
        if (local_50[0] != '\0') {
          pcVar6 = local_50;
        }
        local_38[0] = local_50[0];
        *pcVar6 = '\0';
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01653bd0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8a10();
        lVar7 = local_48;
        if (local_48 == 0) {
          lVar7 = 0;
          bVar2 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
          bVar2 = true;
        }
        if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d23310();
        lVar3 = local_58;
        pVar5 = CONCAT31((int3)(param_1 >> 8),local_50[0]);
        pcVar6 = &local_68;
        if (local_50[0] != '\0') {
          pcVar6 = local_50;
        }
        local_68 = local_50[0];
        *pcVar6 = '\0';
        if ((local_50[0] != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8a10();
        lVar7 = local_48;
        if (local_48 == 0) {
          lVar7 = 0;
          bVar2 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
          bVar2 = true;
        }
        if ((local_68 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d23310();
      lVar3 = local_58;
      pVar5 = CONCAT31((int3)(param_1 >> 8),local_50[0]);
      pcVar6 = local_38;
      if (local_50[0] != '\0') {
        pcVar6 = local_50;
      }
      local_38[0] = local_50[0];
      *pcVar6 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01653bd0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8a10();
      lVar7 = local_48;
      if (local_48 == 0) {
        lVar7 = 0;
        bVar2 = false;
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
        bVar2 = true;
      }
      if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar7 != 0) {
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01710460();
      lVar3 = local_58;
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01710460();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d51d20();
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
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (!bVar2) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if (bVar2) {
        FUN_00d50b20();
      }
    }
  }
LAB_016954cf:
  FUN_0190f240();
  return;
}


