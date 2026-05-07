// Function: FUN_019b7a60
// Address: 019b7a60
// Size: 1826 bytes
// Class: MUScalePitchSystem
// String references:
//   "MUScalePitchSystem"


/* WARNING: Removing unreachable block (ram,0x019b7fcb) */
/* WARNING: Removing unreachable block (ram,0x019b7fd4) */
/* WARNING: Removing unreachable block (ram,0x019b7f11) */
/* WARNING: Removing unreachable block (ram,0x019b7f1a) */
/* WARNING: Removing unreachable block (ram,0x019b80ba) */
/* WARNING: Removing unreachable block (ram,0x019b80c6) */
/* WARNING: Removing unreachable block (ram,0x019b8070) */
/* WARNING: Removing unreachable block (ram,0x019b807c) */
/* WARNING: Removing unreachable block (ram,0x019b7bfe) */
/* WARNING: Removing unreachable block (ram,0x019b7c07) */
/* WARNING: Removing unreachable block (ram,0x019b7ada) */
/* WARNING: Removing unreachable block (ram,0x019b7ae3) */
/* WARNING: Removing unreachable block (ram,0x019b7b89) */
/* WARNING: Removing unreachable block (ram,0x019b7b92) */
/* WARNING: Removing unreachable block (ram,0x019b7e1b) */
/* WARNING: Removing unreachable block (ram,0x019b7e28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019b7a60(undefined4 param_1,int param_2,char param_3)

{
  uint uVar1;
  code *pcVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  code *in_RCX;
  code *pcVar8;
  code *pcVar9;
  longlong *unaff_RDI;
  code *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  char local_a0;
  code *local_88;
  char local_80;
  longlong local_70;
  char local_68;
  code *local_48;
  char local_40;
  
  pcVar3 = local_48;
  pcVar8 = in_RCX;
  if (param_2 == 0) {
    param_1 = (**(code **)(*unaff_RDI + 0xda0))();
  }
  (**(code **)(*unaff_RDI + 0x9b0))(param_1,(ulonglong)in_RCX & 0xff);
  if (local_40 == '\0') {
    if (local_48 == (code *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_48 == (code *)0x0) {
    return;
  }
  uVar1 = *(uint *)(local_48 + 0xc);
  if ((ulonglong)uVar1 == 0) goto LAB_019b8102;
  (**(code **)(*unaff_RDI + 0xa28))();
  local_88 = local_48;
  if (local_40 == '\0') {
    if (local_48 == (code *)0x0) {
      local_88 = (code *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
  }
  local_80 = '\x01';
  if ((DAT_027c0160 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_0270ab28 = FUN_0015ea50();
    _DAT_0270ab10 = "MUScalePitchSystem";
    _DAT_0270ab18 = 0x78;
    pcVar8 = FUN_0015ecf0;
    _DAT_0270ab20 = FUN_0015ecf0;
    _DAT_0270ab30 = 0;
    uRam000000000270ab38 = 0;
    _DAT_0270ab40 = 0;
    uRam000000000270ab48 = 0;
    _DAT_0270ab50 = 0;
    uRam000000000270ab58 = 0;
    _DAT_0270ab60 = 0;
    uRam000000000270ab68 = 0;
    _DAT_0270ab70 = 0;
    uRam000000000270ab78 = 0;
    _DAT_0270ab80 = 0;
    uRam000000000270ab88 = 0;
    _DAT_0270ab90 = 0;
    uRam000000000270ab98 = 0;
    _DAT_0270aba0 = 0;
    uRam000000000270aba8 = 0;
    _DAT_0270abb0 = 0;
    uRam000000000270abb8 = 0;
    _DAT_0270abc0 = 0;
    uRam000000000270abc8 = 0;
    _DAT_0270abd0 = 0;
    ___cxa_guard_release();
  }
  if (local_88 == (code *)0x0) {
LAB_019b7b55:
    pcVar9 = DAT_02802688;
    local_80 = DAT_02802690;
    if (DAT_02802690 != '\0') goto LAB_019b7ba9;
LAB_019b7bb8:
    if (pcVar9 != (code *)0x0) goto LAB_019b7bc1;
  }
  else {
    (**(code **)(*(longlong *)local_88 + 0x360))();
    cVar4 = FUN_00e85ea0();
    pcVar9 = local_88;
    if (cVar4 == '\0') goto LAB_019b7b55;
LAB_019b7ba9:
    if (pcVar9 == (code *)0x0) goto LAB_019b7bb8;
    FUN_00d50b00();
LAB_019b7bc1:
    uVar15 = FUN_0025e9a0();
    if ((local_40 == '\0') && (local_48 != (code *)0x0)) {
      uVar15 = FUN_00d50b00();
    }
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        pcVar2 = *(code **)(*(longlong *)(pcVar3 + 0x10) + uVar11 * 8);
        if (pcVar2 != (code *)0x0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)pcVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if ((local_40 != '\0') && (local_48 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if (local_48 == (code *)0x0) {
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar15 = FUN_0125a2c0();
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar8);
          pcVar10 = local_88;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            pcVar8 = local_88;
            pcVar10 = *(code **)(local_88 + ((ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4) * 8);
          }
          (**(code **)(*(longlong *)pcVar10 + 0x3a8))(uVar15);
        }
        else {
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if (local_40 == '\0') {
            if (local_48 != (code *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01507f00();
          if (local_48 != (code *)0x0) {
            FUN_00d50b20();
          }
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)pcVar8);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          pcVar8 = pcVar9;
        }
        cVar4 = FUN_01751560();
        uVar15 = extraout_XMM0_Da;
        if (cVar4 != '\0') {
          local_40 = '\0';
          uVar15 = FUN_00d21140();
          local_48 = pcVar2;
        }
        if (pcVar2 != (code *)0x0) {
          uVar15 = FUN_00d50b20();
        }
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar11);
    }
    uVar11 = (ulonglong)*(uint *)(pcVar3 + 0xc);
    if (uVar11 == 0) {
LAB_019b80d2:
      FUN_00d50b20();
    }
    else {
      local_a0 = (char)param_2;
      if ((local_a0 == '\0') || (param_3 == '\0')) {
LAB_019b8039:
        (**(code **)(*unaff_RDI + 0xdb8))(uVar15,1);
        goto LAB_019b80d2;
      }
      if (0 < (int)*(uint *)(pcVar3 + 0xc)) {
        bVar13 = true;
        uVar12 = 1;
        do {
          lVar7 = *(longlong *)(*(longlong *)(pcVar3 + 0x10) + -8 + uVar12 * 8);
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*unaff_RDI + 0xe20))();
          cVar4 = FUN_00d23d70();
          uVar15 = extraout_XMM0_Da_00;
          if ((local_68 != '\0') && (local_70 != 0)) {
            uVar15 = FUN_00d50b20();
          }
          if (lVar7 != 0) {
            uVar15 = FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            if (bVar13) goto LAB_019b8039;
            break;
          }
          bVar13 = uVar12 < uVar11;
          bVar14 = uVar12 != uVar11;
          uVar12 = uVar12 + 1;
        } while (bVar14);
      }
      (**(code **)(*unaff_RDI + 0xdc0))(uVar15,1);
      if (pcVar3 != (code *)0x0) goto LAB_019b80d2;
    }
    if (local_80 != '\0') {
      FUN_00d50b20();
    }
  }
  if (local_88 != (code *)0x0) {
    FUN_00d50b20();
  }
LAB_019b8102:
  FUN_00d50b20();
  return;
}


