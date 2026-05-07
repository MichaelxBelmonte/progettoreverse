// Function: FUN_00802530
// Address: 00802530
// Size: 1206 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x008027f3) */
/* WARNING: Removing unreachable block (ram,0x008027ff) */
/* WARNING: Removing unreachable block (ram,0x00802757) */
/* WARNING: Removing unreachable block (ram,0x00802763) */
/* WARNING: Removing unreachable block (ram,0x0080290b) */
/* WARNING: Removing unreachable block (ram,0x00802914) */
/* WARNING: Removing unreachable block (ram,0x0080270d) */
/* WARNING: Removing unreachable block (ram,0x00802716) */
/* WARNING: Removing unreachable block (ram,0x008026df) */
/* WARNING: Removing unreachable block (ram,0x008026ec) */
/* WARNING: Removing unreachable block (ram,0x0080299a) */
/* WARNING: Removing unreachable block (ram,0x008029a7) */

undefined8 * FUN_00802530(pthread_key_t param_1)

{
  longlong lVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  
  iVar2 = (**(code **)(**(longlong **)(unaff_RSI + 0x88) + 0x920))();
  if (iVar2 != 9) goto LAB_008029c6;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_012fc0c0();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RSI + 0xb8) + 0x920))();
  FUN_01d70140();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      goto LAB_0080271b;
    }
  }
  else if (local_60 != 0) {
LAB_0080271b:
    FUN_00802d30();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    if (local_60 != 0) {
      FUN_00d6f370();
      lVar1 = DAT_0272fba8;
      if (DAT_0272fba8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d6f570();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar5 = &DAT_02572358;
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (0 < *(int *)(local_60 + 0xc)) {
        iVar2 = 0;
        do {
          pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e7210();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_00d214d0();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(local_60 + 0xc));
      }
      FUN_000be170();
      *unaff_RDI = puVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      FUN_00d50b20();
      if (local_60 == 0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
LAB_008029c6:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


