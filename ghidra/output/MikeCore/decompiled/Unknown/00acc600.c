// Function: FUN_00acc600
// Address: 00acc600
// Size: 531 bytes
// Class: Unknown
// String references:
//   "wide path not supported here"
//   "failed opening file"
//   "failed setting file size"
//   "failed querying file size"


void FUN_00acc600(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  off_t oVar7;
  int *unaff_RSI;
  longlong unaff_RDI;
  undefined8 local_58;
  
  iVar3 = *unaff_RSI;
  pcVar6 = section_00000600.sectname + 2;
  if (iVar3 != 2) {
    pcVar6 = (char *)0x0;
  }
  piVar4 = ___error();
  *piVar4 = 0;
  if ((char)unaff_RSI[0x16] == '\0') {
    oVar7 = 0x1c0;
    iVar2 = _open(pcVar6,0x1c0);
    iVar5 = (int)pcVar6;
    *(int *)(unaff_RDI + 0x70) = iVar2;
    piVar4 = ___error();
    if (*piVar4 == 0) {
      if (((iVar3 != 2) || (*(longlong *)(unaff_RSI + 6) == 0)) ||
         (iVar3 = _ftruncate(iVar5,oVar7), iVar3 != -1)) {
        if (*(longlong *)(unaff_RSI + 4) == -1) {
          iVar3 = _fstat_INODE64();
          *(undefined8 *)(unaff_RDI + 0x68) = local_58;
          if (iVar3 == -1) {
            piVar4 = ___error();
            iVar3 = *piVar4;
            if (*(int *)(unaff_RDI + 0x70) != 0) {
              _close((int)local_58);
            }
            piVar4 = ___error();
            *piVar4 = iVar3;
            FUN_00acc0b0();
            FUN_00accda0();
            FUN_00acc470();
            goto LAB_00acc811;
          }
        }
        else {
          *(longlong *)(unaff_RDI + 0x68) = *(longlong *)(unaff_RSI + 4);
        }
        return;
      }
      piVar4 = ___error();
      iVar3 = *piVar4;
      if (*(int *)(unaff_RDI + 0x70) != 0) {
        _close(iVar5);
      }
      piVar4 = ___error();
      *piVar4 = iVar3;
      FUN_00acc0b0();
      FUN_00accda0();
      FUN_00acc470();
    }
    else {
      piVar4 = ___error();
      iVar3 = *piVar4;
      if (*(int *)(unaff_RDI + 0x70) != 0) {
        _close(iVar5);
      }
      piVar4 = ___error();
      *piVar4 = iVar3;
      FUN_00acc0b0();
      FUN_00accda0();
      FUN_00acc470();
    }
  }
  else {
    piVar4 = ___error();
    iVar2 = (int)pcVar6;
    *piVar4 = 0x16;
    piVar4 = ___error();
    iVar3 = *piVar4;
    if (*(int *)(unaff_RDI + 0x70) != 0) {
      _close(iVar2);
    }
    piVar4 = ___error();
    *piVar4 = iVar3;
    FUN_00acc0b0();
    FUN_00accda0();
    FUN_00acc470();
  }
LAB_00acc811:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


