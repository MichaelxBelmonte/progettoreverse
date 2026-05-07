// Function: FUN_01805370
// Address: 01805370
// Size: 534 bytes
// Class: MUPitchMapper


/* WARNING: Removing unreachable block (ram,0x018053c8) */
/* WARNING: Removing unreachable block (ram,0x018053d1) */
/* WARNING: Removing unreachable block (ram,0x01805557) */
/* WARNING: Removing unreachable block (ram,0x01805560) */
/* WARNING: Removing unreachable block (ram,0x018054cc) */
/* WARNING: Removing unreachable block (ram,0x018054d5) */
/* WARNING: Removing unreachable block (ram,0x01805516) */
/* WARNING: Removing unreachable block (ram,0x0180551f) */

ulonglong FUN_01805370(char param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  if (*(int *)(unaff_RDI + 0x68) != 0) {
    return 0;
  }
  uVar3 = FUN_01716ab0();
  uVar5 = (ulonglong)uVar3;
  if ((char)uVar3 != '\0') goto LAB_018053db;
  uVar5 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
  if ((*(byte *)(unaff_RDI + 0x60) & 100) != 0) {
    return uVar5;
  }
  if ((*(byte *)(unaff_RDI + 100) & 100) != 0) {
    return uVar5;
  }
  cVar2 = FUN_01716c00();
  if (cVar2 == '\0') {
    FUN_01715620();
    FUN_017185b0();
    local_38 = local_48;
    if (local_48 == 0) goto LAB_01805526;
    bVar1 = true;
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    iVar4 = FUN_01715480();
    iVar4 = iVar4 + 3;
    iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
    iVar4 = ((iVar4 >> 0x1f & 0xcU) + iVar4) * 7;
    iVar4 = iVar4 + ((int)(short)iVar4 / 0xc) * -0xc;
    cVar2 = ((byte)((uint)(int)(short)iVar4 >> 0xf) & 0xc) + (char)iVar4 + '\x06';
    uVar3 = cVar2 * 0x2b;
    FUN_017185b0((int)(char)(cVar2 + ((char)((uVar3 & 0xffff) >> 0xf) + (char)(uVar3 >> 9)) * -0xc +
                            -6));
    local_38 = local_48;
    if (local_48 == 0) {
LAB_01805526:
      local_38 = 0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  cVar2 = FUN_01716ab0();
  if ((bVar1) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    return uVar5;
  }
LAB_018053db:
  if ((param_1 != '\0') && (*(char *)(unaff_RDI + 0x5f) != '\0')) {
    return CONCAT71((int7)(uVar5 >> 8),1);
  }
  return 0;
}


