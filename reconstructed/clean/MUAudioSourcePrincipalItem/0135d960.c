// Function: FUN_0135d960
// Address: 0135d960
// Size: 668 bytes
// Class: MUAudioSourcePrincipalItem

uint32_t FUN_0135d960(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  void *pvVar6;
  void* pVar7;
  int64_t *arg1;
  int64_t this_ptr;
  uint8_t local_68 [8];
  uint8_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  local_38 = *arg1;
  local_30 = '\0';
  uVar4 = FUN_00d23d70();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  FUN_013291f0();
  FUN_013297b0();
  local_38 = *arg1;
  local_30 = '\0';
  cVar3 = FUN_00d24090();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_0134b230();
  }
  local_38 = *arg1;
  local_30 = '\0';
  cVar3 = FUN_00d24090();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_0134ac00();
  }
  local_58 = *arg1;
  local_50 = '\0';
  FUN_0135dd30();
  lVar1 = local_48;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_60 = 1;
  pVar7 = 1;
  FUN_01355320(1,local_68,0);
  lVar2 = local_38;
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (((*(int64_t *)(this_ptr + 0x1f8) == 0) && (*(int64_t *)(this_ptr + 0x200) == 0)) &&
     (*(int64_t *)(this_ptr + 0x148) != 0)) {
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_0141bab0();
    if (iVar5 != 3) goto LAB_0135db59;
  }
  else {
LAB_0135db59:
    cVar3 = FUN_01334f30();
    if (cVar3 == '\0') {
      if (lVar2 == 0) {
        return uVar4;
      }
      goto LAB_0135db87;
    }
  }
  if (*(int *)(lVar2 + 0xc) != 0) {
    FUN_013357a0();
  }
LAB_0135db87:
  FUN_00d50b20();
  return uVar4;
}

