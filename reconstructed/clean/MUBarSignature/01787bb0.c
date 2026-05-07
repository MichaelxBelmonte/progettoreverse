// Function: FUN_01787bb0
// Address: 01787bb0
// Size: 573 bytes
// Class: MUBarSignature

float FUN_01787bb0(void)

{
  int iVar1;
  int iVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  int local_48;
  float local_34;
  
  fVar5 = g_0240b530;
  if (*(char *)(this_ptr + 0x52) != '\0') {
    fVar5 = 0.0;
  }
  iVar2 = *(int *)(this_ptr + 0x4c);
  iVar1 = *(int *)(this_ptr + 0x48);
  lVar3 = *(int64_t *)(this_ptr + 0x28);
  if (lVar3 == 0) {
    local_34 = 0.0;
    lVar3 = 0;
  }
  else {
    local_48 = -1;
    local_34 = 0.0;
    while (local_48 = local_48 + 1, local_48 < *(int *)(lVar3 + 0xc)) {
      fVar4 = (float)FUN_01787bb0();
      local_34 = local_34 + fVar4;
    }
    FUN_01798230();
    lVar3 = *(int64_t *)(this_ptr + 0x28);
  }
  fVar5 = ((g_02390124 - (float)(iVar1 * iVar1) / g_023908ec) - (float)iVar2 / g_023908ec) -
          fVar5;
  if (*(int *)(lVar3 + 0xc) != 0) {
    local_34 = local_34 / (float)*(int *)(lVar3 + 0xc);
  }
  if ((double)fVar5 + g_023934c8 <= (double)local_34) {
    if (lVar3 != 0) {
      for (iVar2 = 0; iVar2 < *(int *)(lVar3 + 0xc); iVar2 = iVar2 + 1) {
        FUN_01787bb0();
      }
      FUN_01798230();
    }
  }
  else {
    local_34 = fVar5;
    if (*arg1 != 0) {
      FUN_00d50b00();
      FUN_00d21140();
      FUN_00d50b20();
    }
  }
  return local_34;
}

