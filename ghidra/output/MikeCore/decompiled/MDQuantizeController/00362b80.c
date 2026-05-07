// Function: FUN_00362b80
// Address: 00362b80
// Size: 838 bytes
// Class: MDQuantizeController


/* WARNING: Removing unreachable block (ram,0x00362c03) */
/* WARNING: Removing unreachable block (ram,0x00362c0c) */
/* WARNING: Removing unreachable block (ram,0x00362ce2) */
/* WARNING: Removing unreachable block (ram,0x00362ceb) */
/* WARNING: Removing unreachable block (ram,0x00362e37) */
/* WARNING: Removing unreachable block (ram,0x00362e44) */
/* WARNING: Removing unreachable block (ram,0x00362bc7) */
/* WARNING: Removing unreachable block (ram,0x00362bd0) */
/* WARNING: Removing unreachable block (ram,0x00362eaf) */
/* WARNING: Removing unreachable block (ram,0x00362ebc) */

void FUN_00362b80(pthread_key_t param_1)

{
  int iVar1;
  void *pvVar2;
  longlong unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_017a7800();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_00362c26;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_00362c26;
  local_40 = DAT_02729540;
  if (DAT_02729540 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  FUN_00ca13a0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00362c26:
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_004faf60();
  if (local_40 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    iVar1 = *(int *)(local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150eff0();
        iVar1 = *(int *)(local_40 + 0xc);
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 == 0) {
          *(undefined1 *)(unaff_RDI + 0x48) = 1;
        }
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}


