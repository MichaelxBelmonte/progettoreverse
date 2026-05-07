// Function: FUN_01b3b230
// Address: 01b3b230
// Size: 3558 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01b3ba51) */
/* WARNING: Removing unreachable block (ram,0x01b3ba5d) */
/* WARNING: Removing unreachable block (ram,0x01b3b879) */
/* WARNING: Removing unreachable block (ram,0x01b3b882) */
/* WARNING: Removing unreachable block (ram,0x01b3b27e) */
/* WARNING: Removing unreachable block (ram,0x01b3b287) */
/* WARNING: Removing unreachable block (ram,0x01b3b4a2) */
/* WARNING: Removing unreachable block (ram,0x01b3b4ab) */
/* WARNING: Removing unreachable block (ram,0x01b3ba36) */
/* WARNING: Removing unreachable block (ram,0x01b3ba3f) */
/* WARNING: Removing unreachable block (ram,0x01b3b43e) */
/* WARNING: Removing unreachable block (ram,0x01b3b447) */

longlong * FUN_01b3b230(pthread_key_t param_1)

{
  pthread_key_t pVar1;
  pthread_key_t pVar2;
  bool bVar3;
  void *pvVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_60;
  char local_58;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  FUN_01b27070();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pVar1 = (pthread_key_t)local_40;
  local_48 = local_40;
  if (*(char *)(unaff_RSI + 0xf1) == '\0') {
    if (*(char *)(unaff_RSI + 0xf0) == '\0') {
      FUN_0173b120();
      if (local_40 == 0) {
        local_48 = 0;
        bVar3 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        local_38 = '\0';
        bVar3 = true;
      }
    }
    else {
      lVar5 = *(longlong *)(unaff_RSI + 0xe8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      FUN_0173b120();
      if (local_40 == 0) {
        local_48 = 0;
        bVar3 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        local_38 = '\0';
        bVar3 = true;
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        param_1 = pVar1;
      }
      FUN_0173b790();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_0176f880();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_0173b720();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b790();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        param_1 = pVar1;
      }
      FUN_0173b790();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01770220();
      FUN_01770230();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b790();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        param_1 = pVar1;
      }
      FUN_0173b790();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017702f0();
      FUN_01770300();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else if (*(char *)(unaff_RSI + 0xf0) == '\0') {
    lVar5 = *(longlong *)(unaff_RSI + 0xe8);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    FUN_0173b120();
    if (local_40 == 0) {
      local_48 = 0;
      bVar3 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
    }
    else {
      local_38 = '\0';
      bVar3 = true;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (pthread_key_t)local_48;
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = pVar1;
    }
    FUN_0173b6f0();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_017353f0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0173b680();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = *(longlong *)(unaff_RSI + 0xe0);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    FUN_0173b120();
    if (local_40 == 0) {
      local_48 = 0;
      bVar3 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
    }
    else {
      local_38 = '\0';
      bVar3 = true;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific(param_1);
  pVar2 = (pthread_key_t)local_48;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = pVar2;
  }
  FUN_0174de40();
  if (*(int *)(unaff_RSI + 0xf8) == 1) {
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = pVar2;
    }
    FUN_0173b790();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01770350();
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    FUN_01777b90();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_0176f3a0();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (*(int *)(unaff_RSI + 0xf8) == 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = pVar2;
    }
    FUN_0173b790();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = pVar1;
    }
    FUN_0173b790();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01770350();
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    FUN_01777b90();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_0176f3a0();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = pVar2;
    }
    FUN_0173b790();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01770740();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar3) && (local_48 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


