// Function: FUN_0170f8b0
// Address: 0170f8b0
// Size: 904 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x0170fa99) */
/* WARNING: Removing unreachable block (ram,0x0170faa5) */
/* WARNING: Removing unreachable block (ram,0x0170fba5) */
/* WARNING: Removing unreachable block (ram,0x0170fbae) */

void FUN_0170f8b0(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x68);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_60 = 0;
  lVar2 = *(longlong *)(unaff_RDI + 0x70);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar2;
  FUN_017105a0();
  local_58 = local_38;
  local_50 = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_50 = '\x01';
  plVar6 = &local_58;
  FUN_01687020(plVar6,&local_68);
  lVar2 = local_48;
  pVar5 = (pthread_key_t)plVar6;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_01512830();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01512830();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      cVar3 = FUN_0167b260();
      if (cVar3 != '\0') {
        FUN_016818b0();
      }
    }
    FUN_00d50b20();
  }
  return;
}


