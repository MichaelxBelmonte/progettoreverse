// Function: FUN_01b7ad50
// Address: 01b7ad50
// Size: 581 bytes
// Class: GNString


void FUN_01b7ad50(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong unaff_RDI;
  longlong local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  longlong local_70;
  char local_68 [16];
  undefined8 local_58;
  longlong local_50;
  char local_48;
  undefined4 local_3c;
  char local_38 [8];
  
  local_3c = 0xffffffff;
  if (*(longlong *)(unaff_RDI + 0x148) == 0) {
    return;
  }
  uVar5 = *(undefined8 *)(unaff_RDI + 0x150);
  FUN_01e057f0();
  lVar1 = *(longlong *)(unaff_RDI + 0x158);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012521f0(uVar5,0,&local_58,local_68 + 8);
  pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar5 >> 8),local_68[0]);
  pcVar7 = local_38;
  if (local_68[0] != '\0') {
    pcVar7 = local_68;
  }
  local_38[0] = local_68[0];
  *pcVar7 = '\0';
  if ((local_68[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_48 = 0;
  if ((local_38[0] == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  local_50 = local_70;
  local_48 = '\x01';
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    lVar1 = *(longlong *)(unaff_RDI + 0x158);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar6 = &local_58;
    cVar2 = FUN_012535e0(puVar6,&local_50,local_68 + 8,&local_3c);
    pVar4 = (pthread_key_t)puVar6;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      if (local_50 == 0) {
        lVar1 = *(longlong *)(unaff_RDI + 0x158);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_012535e0(&local_58,&local_50,local_68 + 8,&local_3c);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') goto LAB_01b7af72;
      }
      local_90 = local_50;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      FUN_01b755e0(local_58,&local_90,&local_80);
    }
  }
LAB_01b7af72:
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}


