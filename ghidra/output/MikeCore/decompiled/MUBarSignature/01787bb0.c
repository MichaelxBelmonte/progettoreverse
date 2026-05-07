// Function: FUN_01787bb0
// Address: 01787bb0
// Size: 573 bytes
// Class: MUBarSignature


/* WARNING: Removing unreachable block (ram,0x01787d56) */
/* WARNING: Removing unreachable block (ram,0x01787d5f) */
/* WARNING: Removing unreachable block (ram,0x01787c30) */
/* WARNING: Removing unreachable block (ram,0x01787c50) */
/* WARNING: Removing unreachable block (ram,0x01787c32) */
/* WARNING: Removing unreachable block (ram,0x01787c52) */

float FUN_01787bb0(void)

{
  int iVar1;
  int iVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar3;
  float fVar4;
  float fVar5;
  int local_48;
  float local_34;
  
  fVar5 = DAT_0240b530;
  if (*(char *)(unaff_RDI + 0x52) != '\0') {
    fVar5 = 0.0;
  }
  iVar2 = *(int *)(unaff_RDI + 0x4c);
  iVar1 = *(int *)(unaff_RDI + 0x48);
  lVar3 = *(longlong *)(unaff_RDI + 0x28);
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
    lVar3 = *(longlong *)(unaff_RDI + 0x28);
  }
  fVar5 = ((DAT_02390124 - (float)(iVar1 * iVar1) / DAT_023908ec) - (float)iVar2 / DAT_023908ec) -
          fVar5;
  if (*(int *)(lVar3 + 0xc) != 0) {
    local_34 = local_34 / (float)*(int *)(lVar3 + 0xc);
  }
  if ((double)fVar5 + DAT_023934c8 <= (double)local_34) {
    if (lVar3 != 0) {
      for (iVar2 = 0; iVar2 < *(int *)(lVar3 + 0xc); iVar2 = iVar2 + 1) {
        FUN_01787bb0();
      }
      FUN_01798230();
    }
  }
  else {
    local_34 = fVar5;
    if (*unaff_RSI != 0) {
      FUN_00d50b00();
      FUN_00d21140();
      FUN_00d50b20();
    }
  }
  return local_34;
}


