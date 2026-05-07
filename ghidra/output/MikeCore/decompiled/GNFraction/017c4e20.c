// Function: FUN_017c4e20
// Address: 017c4e20
// Size: 979 bytes
// Class: GNFraction


/* WARNING: Removing unreachable block (ram,0x017c517b) */
/* WARNING: Removing unreachable block (ram,0x017c5188) */

undefined8 * FUN_017c4e20(undefined8 param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  void *pvVar5;
  ulonglong uVar6;
  code *pcVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar8;
  undefined8 *local_38;
  
  cVar4 = FUN_00e7c7f0();
  pcVar3 = DAT_02572370;
  if (cVar4 == '\0') {
LAB_017c5192:
    *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_017c519b:
    local_38 = (undefined8 *)0x0;
  }
  else {
    if (param_2 != '\0') {
      if (DAT_0240b530 < *(float *)(unaff_RSI + 0x58)) goto LAB_017c4e86;
      goto LAB_017c5192;
    }
    if (*(float *)(unaff_RSI + 0x58) <= 0.0) goto LAB_017c5192;
LAB_017c4e86:
    lVar1 = *(longlong *)(unaff_RSI + 0x40);
    if (lVar1 == 0) goto LAB_017c5192;
    if (*(int *)(lVar1 + 0xc) < 1) {
      bVar2 = false;
      local_38 = (undefined8 *)0x0;
    }
    else {
      iVar8 = 0;
      local_38 = (undefined8 *)0x0;
      bVar2 = false;
      pcVar7 = DAT_02572370;
      do {
        pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar6 = FUN_017c3170();
        cVar4 = FUN_00e7c7f0();
        if (cVar4 == '\0') {
LAB_017c4fff:
          pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar6 = FUN_017c3170();
          FUN_00e7c3c0();
          FUN_00e7b820();
          cVar4 = FUN_00e7c7f0();
          if (cVar4 != '\0') {
            FUN_00e7b970();
            FUN_00e7c2a0();
            FUN_00e7bdc0();
            pcVar7 = (code *)0x0;
            if ((uVar6 & 0xffffffff00000000) == 0x100000000) goto LAB_017c5109;
          }
        }
        else {
          FUN_00e7b970();
          FUN_00e7c2a0();
          FUN_00e7bdc0();
          pcVar7 = (code *)0x0;
          if ((uVar6 & 0xffffffff00000000) != 0x100000000) goto LAB_017c4fff;
LAB_017c5109:
          pcVar7 = (code *)0x0;
          if (local_38 == (undefined8 *)0x0) {
            local_38 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_38 = &DAT_02572358;
            (*pcVar3)();
            bVar2 = true;
          }
          FUN_00d21140();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_0142bf90();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar2) {
      *unaff_RDI = local_38;
      goto LAB_017c51a0;
    }
    if (local_38 == (undefined8 *)0x0) goto LAB_017c519b;
    FUN_00d50b00();
  }
  *unaff_RDI = local_38;
LAB_017c51a0:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


