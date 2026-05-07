// Function: FUN_00e817d0
// Address: 00e817d0
// Size: 546 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_00e817d0(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  char *pcVar2;
  int64_t *plVar3;
  int64_t *this_ptr;
  bool bVar4;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  local_78 = *param_2;
  local_70 = '\0';
  FUN_019a54a0(param_1,&local_78);
  local_38[0] = local_48[0];
  pcVar2 = local_48;
  if (local_48[0] == '\0') {
    pcVar2 = local_38;
  }
  *pcVar2 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 == 0) {
    FUN_00d23340();
    local_38[0] = local_48[0];
    pcVar2 = local_38;
    if (local_48[0] != '\0') {
      pcVar2 = local_48;
    }
    *pcVar2 = '\0';
    bVar4 = true;
    if (*param_1 == 0) {
      FUN_00d23340();
      pcVar2 = local_48;
      if (local_48[0] == '\0') {
        pcVar2 = local_40;
      }
      local_40[0] = local_48[0];
      *pcVar2 = '\0';
      bVar4 = *param_3 != 0;
    }
    if (bVar4) {
      local_68 = *param_1;
      local_60 = '\0';
      FUN_00d21140();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = *param_3;
      local_48[0] = '\0';
      FUN_00d21140();
      if ((local_48[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(this_ptr + 1) = 0;
    lVar1 = param_2[1];
    *this_ptr = *param_2;
    plVar3 = this_ptr + 1;
    if ((char)lVar1 != '\0') {
      plVar3 = param_2 + 1;
      *(void*)(this_ptr + 1) = 1;
    }
    *(void*)plVar3 = 0;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = local_50;
    if (local_38[0] == '\0') {
      *(void*)(this_ptr + 1) = 0;
    }
    else {
      *(void*)(this_ptr + 1) = 1;
    }
  }
  return;
}

