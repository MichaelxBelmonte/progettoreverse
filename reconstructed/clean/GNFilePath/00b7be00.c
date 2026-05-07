// Function: FUN_00b7be00
// Address: 00b7be00
// Size: 548 bytes
// Class: GNFilePath

void FUN_00b7be00(uint64_t param_1,char param_2)

{
  bool bVar1;
  int64_t lVar2;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t local_38;
  char local_30;
  
  if ((g_028a5590 == 0) || (g_028a5599 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5590 == 0) {
      FUN_00da4d00();
      FUN_00b7c170();
      lVar2 = g_028a5590;
      if (g_028a5590 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_38;
          }
        }
        else {
          local_30 = '\0';
          lVar2 = local_38;
        }
        bVar1 = g_028a5590 != 0;
        g_028a5590 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_38;
        }
      }
      if ((lVar2 != 0) && (g_028a5598 == '\0')) {
        g_028a5598 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_38;
      }
      if ((local_30 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      g_028a5599 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5599 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00b7c210();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      goto LAB_00b7bf49;
    }
LAB_00b7bf67:
    if (param_2 == '\0') {
      FUN_00c8e690();
      if ((local_30 == '\0') && (local_38 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      goto LAB_00b7c003;
    }
    FUN_00c8e690();
    if ((local_30 == '\0') && (local_38 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
  }
  else {
    if (local_38 == 0) goto LAB_00b7bf67;
LAB_00b7bf49:
    if (*(int *)(local_38 + 0x18) < unaff_ESI) {
      FUN_00c8e340();
    }
    if (param_2 == '\0') goto LAB_00b7c003;
  }
  ___bzero();
LAB_00b7c003:
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  return;
}

