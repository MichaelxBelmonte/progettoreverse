// Function: FUN_01858fc0
// Address: 01858fc0
// Size: 1581 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0185959b) */
/* WARNING: Removing unreachable block (ram,0x01859431) */
/* WARNING: Removing unreachable block (ram,0x0185912b) */
/* WARNING: Removing unreachable block (ram,0x018590cd) */
/* WARNING: Removing unreachable block (ram,0x01859076) */
/* WARNING: Removing unreachable block (ram,0x0185906d) */
/* WARNING: Removing unreachable block (ram,0x018595c9) */
/* WARNING: Removing unreachable block (ram,0x018595db) */
/* WARNING: Removing unreachable block (ram,0x018595e8) */
/* WARNING: Removing unreachable block (ram,0x0185911d) */
/* WARNING: Removing unreachable block (ram,0x01859134) */
/* WARNING: Removing unreachable block (ram,0x0185957b) */
/* WARNING: Removing unreachable block (ram,0x01859588) */
/* WARNING: Removing unreachable block (ram,0x018595a9) */
/* WARNING: Removing unreachable block (ram,0x0185943e) */
/* WARNING: Removing unreachable block (ram,0x0185944a) */
/* WARNING: Removing unreachable block (ram,0x01859520) */
/* WARNING: Removing unreachable block (ram,0x01859529) */

void FUN_01858fc0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar11;
  undefined4 local_88;
  undefined4 uStack_84;
  char local_80;
  
  if ((((*unaff_RSI != 0) && (*param_2 != 0)) && (*param_1 != 0)) &&
     (*(longlong *)(unaff_RDI + 0x88) != 0)) {
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124f820();
    lVar4 = DAT_027df658;
    if (DAT_027df658 != 0) {
      FUN_00d50b00();
    }
    FUN_018d9a10();
    FUN_018e1cf0();
    if ((local_80 != '\0') && (CONCAT44(uStack_84,local_88) != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    FUN_01716350();
    if (*(char *)MACH_HEADER._16_8_ != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 1) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 2) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 3) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 4) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 5) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 6) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 7) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 8) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 9) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 10) != '\0') {
      FUN_0171a310();
    }
    if (*(char *)(MACH_HEADER._16_8_ + 0xb) != '\0') {
      FUN_0171a310();
    }
    iVar2 = *(int *)(*(longlong *)(unaff_RDI + 0x88) + 0x18);
    iVar1 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    lVar4 = *unaff_RSI;
    if (0 < *(int *)(lVar4 + 0xc)) {
      uVar11 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar11 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        if (*(int *)(*(longlong *)(lVar4 + 0x18) + 0xc) != 0) {
          lVar10 = *(longlong *)(*(longlong *)(unaff_RDI + 0x88) + 0x10);
          if (iVar1 >> 3 <= *(int *)(lVar4 + 0x10)) {
            lVar10 = *(longlong *)
                      ((longlong)*(int *)(*(longlong *)(unaff_RDI + 0x88) + 0x18) + -8 + lVar10);
          }
          pVar9 = (pthread_key_t)lVar10;
          pvVar3 = _pthread_getspecific(pVar9);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00e7c260();
          uVar5 = FUN_016c4760();
          pvVar3 = _pthread_getspecific(pVar9);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar10 = *(longlong *)(unaff_RDI + 0x3c);
          FUN_00e7c260();
          uVar6 = FUN_016c4760();
          if (uVar11 == 0) {
            uVar5 = FUN_00e7bdb0();
          }
          if (uVar11 == *(int *)(*unaff_RSI + 0xc) - 1) {
            uVar6 = FUN_00e7bdb0();
          }
          iVar2 = *(int *)(**(longlong **)(*(longlong *)(lVar4 + 0x18) + 0x10) + 0xc);
          FUN_01716260();
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          iVar2 = iVar2 * 7;
          iVar2 = iVar2 + (((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f)) * -0xc;
          cVar7 = ((byte)(iVar2 >> 0x1f) & 0xc) + (char)iVar2 + '\x06';
          uVar8 = cVar7 * 0x2b;
          pVar9 = (pthread_key_t)
                  (char)(cVar7 + ((char)((uVar8 & 0xffff) >> 0xf) + (char)(uVar8 >> 9)) * -0xc + -6)
          ;
          FUN_01715d30();
          pvVar3 = _pthread_getspecific(pVar9);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012502a0(uVar6,uVar5,0);
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        uVar11 = uVar11 + 1;
        lVar4 = *unaff_RSI;
      } while ((longlong)uVar11 < (longlong)*(int *)(lVar4 + 0xc));
    }
  }
  return;
}


