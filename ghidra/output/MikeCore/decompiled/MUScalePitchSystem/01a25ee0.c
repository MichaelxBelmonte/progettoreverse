// Function: FUN_01a25ee0
// Address: 01a25ee0
// Size: 629 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01a26152) */
/* WARNING: Removing unreachable block (ram,0x01a26162) */

void FUN_01a25ee0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong lVar6;
  longlong local_98;
  char local_90;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01a58dc0();
  local_70 = *unaff_RSI;
  local_68 = '\0';
  local_60 = *param_1;
  local_58 = '\0';
  plVar5 = &local_60;
  (**(code **)(*local_40 + 0xe50))(plVar5,&local_70);
  if ((local_90 == '\0') && (local_98 != 0)) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_98 != 0) {
    if (0 < *(int *)(local_98 + 0xc)) {
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(local_98 + 0x10) + lVar6 * 8);
        pvVar4 = _pthread_getspecific((pthread_key_t)plVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_0125a2d0();
        if (cVar3 != '\0') {
          pvVar4 = _pthread_getspecific((pthread_key_t)plVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_01263cf0();
          if (cVar3 == '\0') {
            FUN_01a58dc0();
            plVar2 = local_40;
            local_48 = '\0';
            local_50 = lVar1;
            pvVar4 = _pthread_getspecific((pthread_key_t)plVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a2c0();
            (**(code **)(
                        "/System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation"
                        + *plVar2 + 0x48))();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(local_98 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  return;
}


