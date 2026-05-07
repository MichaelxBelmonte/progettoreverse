// Function: FUN_01942050
// Address: 01942050
// Size: 968 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01942412) */
/* WARNING: Removing unreachable block (ram,0x0194241f) */

void FUN_01942050(undefined4 param_1)

{
  undefined8 uVar1;
  char cVar2;
  void *pvVar3;
  pthread_key_t in_ECX;
  longlong lVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar5;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  longlong local_80;
  char local_78;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    if (0 < *(int *)(local_80 + 0xc)) {
      lVar4 = 0;
      do {
        uVar1 = *(undefined8 *)(*(longlong *)(local_80 + 0x10) + lVar4 * 8);
        cVar2 = FUN_019415b0();
        uVar5 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          local_a0 = 0;
          local_a8 = uVar1;
          FUN_01941ba0(extraout_XMM0_Da,&local_a8);
          pvVar3 = _pthread_getspecific(in_ECX);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e78c0();
          pvVar3 = _pthread_getspecific(in_ECX);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_012c6a90(param_1);
          if ((local_38 != '\0') && (local_40 != 0)) {
            uVar5 = FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar5 = FUN_00d50b20();
          }
        }
        local_90 = 0;
        local_98 = uVar1;
        FUN_01941c70(uVar5,&local_98);
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6a90(param_1);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6a90(param_1);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(local_80 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return;
}


