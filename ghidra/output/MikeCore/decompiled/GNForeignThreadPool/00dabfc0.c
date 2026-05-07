// Function: FUN_00dabfc0
// Address: 00dabfc0
// Size: 563 bytes
// Class: GNForeignThreadPool


/* WARNING: Removing unreachable block (ram,0x00dac0c3) */
/* WARNING: Removing unreachable block (ram,0x00dac0cc) */
/* WARNING: Removing unreachable block (ram,0x00dac18a) */
/* WARNING: Removing unreachable block (ram,0x00dac193) */

void FUN_00dabfc0(undefined8 param_1,int param_2,size_t param_3)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  bool bVar5;
  longlong local_48;
  char local_40;
  char local_35;
  int local_34;
  
  if (*(longlong *)(unaff_RSI + 0x20) == 0) {
    iVar2 = *(int *)(unaff_RSI + 0x18);
    bVar1 = *(byte *)(unaff_RSI + 0x28);
    pvVar4 = (void *)(ulonglong)bVar1;
    if ((int)(iVar2 + (uint)bVar1) < *(int *)(*(longlong *)(unaff_RSI + 0x10) + 0x18)) {
      if (bVar1 != 0) {
        if (*(char *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x10) + 0x10) + (longlong)iVar2) !=
            'b') goto LAB_00dac1d5;
        *(int *)(unaff_RSI + 0x18) = iVar2 + 1;
      }
      iVar2 = param_2;
      if ((param_2 != -1) || (cVar3 = FUN_00dab510(), iVar2 = local_34, cVar3 != '\0')) {
        local_34 = iVar2;
        FUN_00c8e690();
        if ((local_40 == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        _memcpy(pvVar4,(void *)(longlong)local_34,param_3);
        FUN_00c92150();
        *(int *)(unaff_RSI + 0x18) = *(int *)(unaff_RSI + 0x18) + local_34;
        *unaff_RDI = local_48;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        return;
      }
    }
  }
  else {
    if (*(char *)(unaff_RSI + 0x28) != '\0') {
      FUN_00ccd300(&local_34,&local_35);
      bVar5 = local_34 != 1;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != 0 || bVar5) || (local_35 != 'b')) goto LAB_00dac1d5;
    }
    iVar2 = param_2;
    if ((param_2 != -1) || (cVar3 = FUN_00dab510(), iVar2 = local_34, cVar3 != '\0')) {
      local_34 = iVar2;
      iVar2 = local_34;
      FUN_00c8e690();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      (**(code **)(**(longlong **)(unaff_RSI + 0x20) + 0x380))
                (&local_34,*(undefined8 *)(local_48 + 0x10));
      bVar5 = local_34 != iVar2;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0 || bVar5) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        FUN_00d50b20();
        return;
      }
      FUN_00c92150();
      *unaff_RDI = local_48;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
  }
LAB_00dac1d5:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


