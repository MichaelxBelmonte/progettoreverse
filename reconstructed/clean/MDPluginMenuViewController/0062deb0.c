// Function: FUN_0062deb0
// Address: 0062deb0
// Size: 631 bytes
// Class: MDPluginMenuViewController
// String references:
//   "%@;%@"

int64_t * FUN_0062deb0(void)

{
  int64_t *this_ptr;
  int64_t lVar1;
  int iVar2;
  bool bVar3;
  uint8_t local_a0 [8];
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00d8ede0();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_01f50cc0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_0062e118;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_0062e118;
  lVar1 = local_60;
  if (0 < *(int *)(local_60 + 0xc)) {
    iVar2 = 0;
    do {
      FUN_01f51240();
      FUN_00d962d0();
      FUN_00083ea0(2,local_a0);
      FUN_00d8cb40();
      if (local_70 == lVar1) {
LAB_0062e061:
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
        bVar3 = lVar1 != 0;
        lVar1 = local_70;
        if (bVar3) {
          FUN_00d50b20();
          goto LAB_0062e061;
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        local_68 = '\0';
        lVar1 = local_70;
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(local_60 + 0xc));
  }
  FUN_0065c9a0();
  FUN_00d50b20();
  local_60 = lVar1;
LAB_0062e118:
  *this_ptr = local_60;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

