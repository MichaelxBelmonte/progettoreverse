// Function: FUN_0165d320
// Address: 0165d320
// Size: 784 bytes
// Class: MULSSGenerator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_0165d320(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  undefined1 *puVar4;
  double *unaff_RSI;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  undefined1 local_68 [8];
  undefined1 local_60 [4];
  int local_5c;
  longlong local_58;
  char local_50;
  double local_48;
  longlong local_40;
  char local_38;
  
  local_48 = param_1;
  FUN_0123fd00();
  uVar1 = FUN_00e7cd00(local_48);
  puVar4 = local_68;
  FUN_0165d150(puVar4,uVar1,0,local_60);
  local_40 = local_58;
  pVar3 = (pthread_key_t)puVar4;
  local_38 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_0165d393;
    }
    local_40 = 0;
  }
  else {
LAB_0165d393:
    local_38 = '\x01';
    if (local_40 != 0) {
      if ((local_5c != 0) && (dVar5 = (double)FUN_00e7c860(), dVar5 <= local_48)) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar4 = local_68;
        FUN_01253c10(puVar4,&local_40,local_60,param_2);
        pVar3 = (pthread_key_t)puVar4;
      }
      dVar5 = (double)FUN_00e7c860();
      local_48 = local_48 - dVar5;
      if (unaff_RSI != (double *)0x0) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_58 = FUN_0123fff0();
        uVar6 = FUN_00e7c860();
        dVar5 = (double)_fmod(local_48);
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_58 = FUN_0123ffb0();
        dVar7 = (double)FUN_00e7c860();
        *unaff_RSI = (double)(-(ulonglong)(dVar5 < 0.0) &
                              (ulonglong)((double)(uVar6 & _DAT_023908f0) + dVar5) |
                             ~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar5) * dVar7;
      }
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar5 = (double)FUN_00e7c860();
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_58 = FUN_0123ffb0();
      dVar7 = (double)FUN_00e7c860();
      local_48 = local_48 * dVar7 + dVar5;
      if (local_38 == '\0') {
        return local_48;
      }
      goto LAB_0165d60e;
    }
  }
  local_38 = '\x01';
  if (unaff_RSI != (double *)0x0) {
    dVar5 = (double)_fmod(local_48);
    *unaff_RSI = (double)(~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar5 |
                         (ulonglong)(_DAT_023b1e98 + dVar5) & -(ulonglong)(dVar5 < 0.0));
  }
LAB_0165d60e:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return local_48;
}


