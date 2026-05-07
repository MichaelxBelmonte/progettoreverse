// Function: FUN_01710690
// Address: 01710690
// Size: 4502 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0171104d) */
/* WARNING: Removing unreachable block (ram,0x0171105a) */
/* WARNING: Removing unreachable block (ram,0x01711391) */
/* WARNING: Removing unreachable block (ram,0x0171139d) */
/* WARNING: Removing unreachable block (ram,0x01710ef7) */
/* WARNING: Removing unreachable block (ram,0x01710f00) */
/* WARNING: Removing unreachable block (ram,0x01710af4) */
/* WARNING: Removing unreachable block (ram,0x01710b04) */
/* WARNING: Removing unreachable block (ram,0x01710dca) */
/* WARNING: Removing unreachable block (ram,0x01710dd6) */
/* WARNING: Removing unreachable block (ram,0x017110b2) */
/* WARNING: Removing unreachable block (ram,0x017110be) */
/* WARNING: Removing unreachable block (ram,0x01710e41) */
/* WARNING: Removing unreachable block (ram,0x01710e3f) */
/* WARNING: Removing unreachable block (ram,0x01710e60) */
/* WARNING: Removing unreachable block (ram,0x01710e62) */
/* WARNING: Removing unreachable block (ram,0x01710f47) */
/* WARNING: Removing unreachable block (ram,0x01710f70) */
/* WARNING: Removing unreachable block (ram,0x01710f49) */
/* WARNING: Removing unreachable block (ram,0x01710f72) */

void FUN_01710690(pthread_key_t param_1,byte param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  longlong lVar11;
  longlong unaff_RDI;
  bool bVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  byte local_d0;
  longlong local_c0;
  char local_b8;
  longlong local_98;
  char local_90;
  int local_80;
  longlong local_70;
  char local_68;
  int local_58;
  longlong local_48;
  char local_40;
  char local_32;
  char local_31;
  
  lVar1 = local_98;
  cVar2 = *(char *)(unaff_RDI + 0x60);
  cVar3 = *(char *)(unaff_RDI + 0x61);
  pVar10 = param_1;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_0124ae30();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar5 = FUN_018847d0();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016670b0();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124df10();
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (((iVar4 < 1 && cVar2 == '\0') & param_2) == 0) {
    cVar2 = '\0';
  }
  else {
    FUN_017105a0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      pVar10 = (pthread_key_t)local_98;
    }
    FUN_0132d900();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    cVar2 = FUN_01511080();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  local_d0 = (byte)param_1;
  if (((iVar5 < 1 && cVar3 == '\0') & local_d0) == 0) {
LAB_01710d04:
    if (cVar2 == '\0') goto LAB_0171182a;
  }
  else {
    FUN_017105a0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d900();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    cVar3 = FUN_01512000();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_01710d04;
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar10 = 0x2572358;
  *puVar8 = &DAT_02572358;
  (*DAT_02572370)();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016678c0();
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
      goto LAB_01710dde;
    }
  }
  else if (local_98 != 0) {
LAB_01710dde:
    local_90 = '\0';
    local_98 = 0;
    local_80 = -1;
LAB_01710e3b:
    while( true ) {
      lVar7 = local_70;
      lVar9 = (longlong)local_80;
      local_80 = local_80 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_80) break;
      local_98 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar9 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar1 + 0x10));
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0164fea0();
      if (local_68 == '\0') goto LAB_01710ee0;
      if (local_70 != 0) goto LAB_01710f10;
    }
    lVar7 = lVar1;
    FUN_0049cc10();
    pVar10 = (pthread_key_t)lVar7;
    FUN_00d50b20();
  }
  if (*(int *)((longlong)puVar8 + 0xc) != 0) {
    FUN_0165a430();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar14 = FUN_012ebfe0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar13 = FUN_012ebd30();
    pVar10 = 0;
    FUN_01519e20(uVar14,uVar13,&local_32,&local_31);
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_32 != '\0') {
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01512830();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_31 == '\0') {
      bVar12 = true;
    }
    else {
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01512890();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      bVar12 = local_31 == '\0';
    }
    if (((local_32 != '\0') || (!bVar12)) && (cVar2 = FUN_0167b260(), cVar2 != '\0')) {
      FUN_016818b0();
    }
  }
  FUN_00d50b20();
LAB_0171182a:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
LAB_01710ee0:
  if (local_70 != 0) {
    FUN_00d50b00();
LAB_01710f10:
    local_68 = '\0';
    local_70 = 0;
    local_58 = -1;
    while( true ) {
      lVar9 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(lVar7 + 0xc) <= local_58) break;
      lVar11 = *(longlong *)(lVar7 + 0x10);
      local_70 = *(longlong *)(lVar11 + 8 + lVar9 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar11);
      pVar10 = (pthread_key_t)lVar11;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016573a0();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == unaff_RDI) {
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016557b0();
        local_40 = '\0';
        FUN_00d21140();
        local_48 = local_70;
      }
    }
    FUN_00277f20();
    FUN_00d50b20();
  }
  goto LAB_01710e3b;
}


