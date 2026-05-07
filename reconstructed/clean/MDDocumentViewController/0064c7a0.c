// Function: FUN_0064c7a0
// Address: 0064c7a0
// Size: 560 bytes
// Class: MDDocumentViewController

void FUN_0064c7a0(uint64_t param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int64_t local_80;
  char local_78;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  FUN_00643590();
  if (local_78 == '\0') {
    if (local_80 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_80 == 0) {
    return;
  }
  if (0 < *(int *)(local_80 + 0xc)) {
    iVar3 = 0;
    do {
      FUN_00637870();
      iVar2 = FUN_006e30d0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (iVar2 == -1) {
        FUN_0023af30(param_1,0);
      }
      else {
        FUN_0023af30(param_1,0);
        FUN_0021e4e0();
        FUN_00637870();
        FUN_006e30d0();
        FUN_01c4e0b0();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00637870();
      FUN_006e30d0();
      FUN_0023c090();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00637870();
      cVar1 = FUN_006e6160();
      if (cVar1 != '\0') {
        FUN_00249a60();
      }
      FUN_00249a80();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00637870();
      cVar1 = FUN_006e67f0();
      if (cVar1 != '\0') {
        FUN_00249a70();
      }
      FUN_0024a180();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(local_80 + 0xc));
  }
  FUN_0065ca40();
  FUN_00d50b20();
  return;
}

