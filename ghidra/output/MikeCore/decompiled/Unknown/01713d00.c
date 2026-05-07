// Function: FUN_01713d00
// Address: 01713d00
// Size: 1431 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01713efe) */
/* WARNING: Removing unreachable block (ram,0x01713f0a) */
/* WARNING: Removing unreachable block (ram,0x01713e88) */
/* WARNING: Removing unreachable block (ram,0x01713e94) */
/* WARNING: Removing unreachable block (ram,0x01713fed) */
/* WARNING: Removing unreachable block (ram,0x01713ff9) */
/* WARNING: Removing unreachable block (ram,0x0171405d) */
/* WARNING: Removing unreachable block (ram,0x01714069) */

void FUN_01713d00(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  pthread_key_t pVar4;
  void *pvVar5;
  char *pcVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  pVar4 = (pthread_key_t)param_1;
  local_58 = unaff_RDI + 0x80;
  if (*(int *)(*(longlong *)(unaff_RDI + 0x80) + 0xc) != 0) {
    FUN_00d23340();
    pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_40[0]);
    pcVar6 = local_38;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar4);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_012c8fb0();
    pvVar5 = _pthread_getspecific(pVar4);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_012c8fb0();
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 < iVar2) {
      pvVar5 = _pthread_getspecific(pVar4);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8fb0();
      pVar4 = FUN_01713a50();
      FUN_00d64bd0(pVar4,local_58);
      local_48 = *unaff_RSI;
      local_40[0] = '\0';
      FUN_00d23370();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d65060(pVar4,local_58);
      pvVar5 = _pthread_getspecific(pVar4);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar5 = _pthread_getspecific(pVar4);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8f20();
      local_60 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_60 = '\x01';
      local_68 = local_48;
      FUN_012e66e0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_017141ae;
    }
  }
  FUN_00d649d0();
  local_48 = *unaff_RSI;
  local_40[0] = '\0';
  FUN_00d21140();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d64e50();
  pvVar5 = _pthread_getspecific(pVar4);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar4);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f20();
  local_70 = 0;
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_70 = '\x01';
  local_78 = local_48;
  FUN_012e6520();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_017141ae:
  FUN_00d403d0();
  lVar1 = DAT_027294e8;
  if (DAT_027294e8 != 0) {
    FUN_00d50b00();
  }
  local_80 = 0;
  FUN_00d50b00();
  local_80 = '\x01';
  local_98 = 0;
  local_90 = '\0';
  local_88 = unaff_RDI;
  FUN_00d40470(&local_98,&local_88,3,3);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}


