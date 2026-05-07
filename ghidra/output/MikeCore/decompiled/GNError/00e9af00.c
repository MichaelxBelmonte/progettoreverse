// Function: FUN_00e9af00
// Address: 00e9af00
// Size: 8033 bytes
// Class: GNError
// String references:
//   "      %d work, %d block, ratio %5.2f\n"
//   "    too repetitive; using fallback sorting algorithm\n"
//   "        bucket sorting ...\n"
//   "        main sort initialise ...\n"
//   "        qsort [0x%x, 0x%x]   done %d   this %d\n"
//   "        %d pointers, %d sorted, %d scanned\n"


/* WARNING: Removing unreachable block (ram,0x00e9c9ce) */
/* WARNING: Removing unreachable block (ram,0x00e9c9df) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e9af00(void)

{
  uchar *puVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  longlong lVar14;
  byte *pbVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  byte bVar24;
  char cVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  FILE *pFVar29;
  longlong lVar30;
  longlong lVar31;
  uint *puVar32;
  byte bVar33;
  uint uVar34;
  ulonglong uVar35;
  int *piVar36;
  FILE *pFVar37;
  ulonglong uVar38;
  int iVar39;
  uint uVar40;
  FILE *pFVar41;
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  ulonglong uVar45;
  longlong lVar46;
  undefined2 uVar47;
  int iVar48;
  uint uVar49;
  longlong lVar50;
  ushort uVar51;
  int iVar52;
  uint uVar53;
  uint uVar54;
  int iVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  longlong unaff_RDI;
  size_t sVar59;
  uint uVar60;
  FILE *in_R9;
  FILE *pFVar61;
  int iVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  ulonglong uVar67;
  FILE *pFVar68;
  uint uVar69;
  ulonglong uVar70;
  ulonglong local_1280;
  ulonglong local_1268;
  FILE *local_1260;
  uint *local_1250;
  uint *local_1248;
  uint local_1204;
  FILE local_11f0 [6];
  uint auStack_de8 [256];
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  uint local_4e8 [100];
  uint local_358 [100];
  uint local_1c8 [100];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  piVar13 = *(int **)(unaff_RDI + 0x28);
  lVar14 = *(longlong *)(unaff_RDI + 0x38);
  uVar10 = *(uint *)(unaff_RDI + 0x6c);
  pFVar68 = (FILE *)(longlong)(int)uVar10;
  sVar59 = *(size_t *)(unaff_RDI + 0x290);
  if (9999 < (longlong)pFVar68) {
    pbVar15 = *(byte **)(unaff_RDI + 0x40);
    pFVar41 = (FILE *)(ulonglong)uVar10;
    uVar38 = (ulonglong)(uVar10 & 1);
    iVar26 = 1;
    if (0 < *(int *)(unaff_RDI + 0x58)) {
      iVar26 = *(int *)(unaff_RDI + 0x58);
    }
    cVar25 = 'd';
    if (iVar26 < 100) {
      cVar25 = (char)iVar26;
    }
    iVar26 = ((byte)(cVar25 - 1) / 3) * uVar10;
    local_11f0[0]._p._0_4_ = iVar26;
    local_11f0[0]._p._4_4_ = sVar59;
    if (3 < (int)sVar59) {
      _fwrite(*(void **)PTR____stderrp_024a98a0,1,sVar59,in_R9);
    }
    pbVar4 = pbVar15 + (longlong)(pFVar41->_ubuf + (uVar38 - 0x52));
    ___bzero();
    uVar35 = (ulonglong)*pbVar15 << 8;
    iVar62 = -1;
    iVar52 = -4;
    iVar55 = -3;
    iVar48 = -2;
    iVar28 = 3;
    do {
      (pbVar4 + (ulonglong)(uVar10 + iVar62) * 2)[0] = 0;
      (pbVar4 + (ulonglong)(uVar10 + iVar62) * 2)[1] = 0;
      uVar35 = (longlong)((int)uVar35 >> 8) | (ulonglong)pbVar15[uVar10 + iVar62] << 8;
      piVar13[uVar35] = piVar13[uVar35] + 1;
      (pbVar4 + (ulonglong)(uVar10 + iVar48) * 2)[0] = 0;
      (pbVar4 + (ulonglong)(uVar10 + iVar48) * 2)[1] = 0;
      uVar35 = (longlong)((int)uVar35 >> 8) | (ulonglong)pbVar15[uVar10 + iVar48] << 8;
      piVar13[uVar35] = piVar13[uVar35] + 1;
      (pbVar4 + (ulonglong)(uVar10 + iVar55) * 2)[0] = 0;
      (pbVar4 + (ulonglong)(uVar10 + iVar55) * 2)[1] = 0;
      uVar35 = (longlong)((int)uVar35 >> 8) | (ulonglong)pbVar15[uVar10 + iVar55] << 8;
      piVar13[uVar35] = piVar13[uVar35] + 1;
      (pbVar4 + (ulonglong)(uVar10 + iVar52) * 2)[0] = 0;
      (pbVar4 + (ulonglong)(uVar10 + iVar52) * 2)[1] = 0;
      uVar35 = (longlong)((int)uVar35 >> 8) | (ulonglong)pbVar15[uVar10 + iVar52] << 8;
      piVar13[uVar35] = piVar13[uVar35] + 1;
      iVar39 = iVar28 + -4;
      iVar27 = iVar28 + uVar10;
      iVar62 = iVar62 + -4;
      iVar52 = iVar52 + -4;
      iVar55 = iVar55 + -4;
      iVar48 = iVar48 + -4;
      iVar28 = iVar39;
    } while (6 < iVar27 + -4);
    if (3 < (int)(iVar39 + uVar10)) {
      uVar63 = iVar62 + uVar10;
      uVar42 = (ulonglong)uVar63;
      if ((uVar63 & 1) == 0) {
        (pbVar4 + uVar42 * 2)[0] = 0;
        (pbVar4 + uVar42 * 2)[1] = 0;
        uVar35 = (longlong)((int)uVar35 >> 8) | (ulonglong)pbVar15[uVar42] << 8;
        piVar13[uVar35] = piVar13[uVar35] + 1;
        uVar42 = uVar42 - 1;
      }
      if (uVar63 != 0) {
        lVar43 = uVar42 + 2;
        do {
          (pbVar15 + (longlong)(pFVar41->_ubuf + lVar43 * 2 + (uVar38 - 0x56)))[0] = 0;
          (pbVar15 + (longlong)(pFVar41->_ubuf + lVar43 * 2 + (uVar38 - 0x56)))[1] = 0;
          uVar35 = (longlong)((int)uVar35 >> 8) | (ulonglong)pbVar15[lVar43 + -2] << 8;
          piVar13[uVar35] = piVar13[uVar35] + 1;
          (pbVar15 + (longlong)(pFVar41->_ubuf + lVar43 * 2 + (uVar38 - 0x58)))[0] = 0;
          (pbVar15 + (longlong)(pFVar41->_ubuf + lVar43 * 2 + (uVar38 - 0x58)))[1] = 0;
          uVar35 = (longlong)((int)uVar35 >> 8) | (ulonglong)pbVar15[lVar43 + -3] << 8;
          piVar13[uVar35] = piVar13[uVar35] + 1;
          lVar43 = lVar43 + -2;
        } while (1 < lVar43);
      }
    }
    pbVar15[(longlong)pFVar68] = *pbVar15;
    (pbVar4 + (longlong)pFVar68 * 2)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2)[1] = 0;
    (pbVar15 + 1)[(longlong)pFVar68] = pbVar15[1];
    (pbVar4 + (longlong)pFVar68 * 2 + 2)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 2)[1] = 0;
    (pbVar15 + 2)[(longlong)pFVar68] = pbVar15[2];
    (pbVar4 + (longlong)pFVar68 * 2 + 4)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 4)[1] = 0;
    (pbVar15 + 3)[(longlong)pFVar68] = pbVar15[3];
    (pbVar4 + (longlong)pFVar68 * 2 + 6)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 6)[1] = 0;
    (pbVar15 + 4)[(longlong)pFVar68] = pbVar15[4];
    (pbVar4 + (longlong)pFVar68 * 2 + 8)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 8)[1] = 0;
    (pbVar15 + 5)[(longlong)pFVar68] = pbVar15[5];
    (pbVar4 + (longlong)pFVar68 * 2 + 10)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 10)[1] = 0;
    (pbVar15 + 6)[(longlong)pFVar68] = pbVar15[6];
    (pbVar4 + (longlong)pFVar68 * 2 + 0xc)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0xc)[1] = 0;
    (pbVar15 + 7)[(longlong)pFVar68] = pbVar15[7];
    (pbVar4 + (longlong)pFVar68 * 2 + 0xe)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0xe)[1] = 0;
    (pbVar15 + 8)[(longlong)pFVar68] = pbVar15[8];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x10)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x10)[1] = 0;
    (pbVar15 + 9)[(longlong)pFVar68] = pbVar15[9];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x12)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x12)[1] = 0;
    (pbVar15 + 10)[(longlong)pFVar68] = pbVar15[10];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x14)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x14)[1] = 0;
    (pbVar15 + 0xb)[(longlong)pFVar68] = pbVar15[0xb];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x16)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x16)[1] = 0;
    (pbVar15 + 0xc)[(longlong)pFVar68] = pbVar15[0xc];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x18)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x18)[1] = 0;
    (pbVar15 + 0xd)[(longlong)pFVar68] = pbVar15[0xd];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x1a)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x1a)[1] = 0;
    (pbVar15 + 0xe)[(longlong)pFVar68] = pbVar15[0xe];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x1c)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x1c)[1] = 0;
    (pbVar15 + 0xf)[(longlong)pFVar68] = pbVar15[0xf];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x1e)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x1e)[1] = 0;
    (pbVar15 + 0x10)[(longlong)pFVar68] = pbVar15[0x10];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x20)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x20)[1] = 0;
    (pbVar15 + 0x11)[(longlong)pFVar68] = pbVar15[0x11];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x22)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x22)[1] = 0;
    (pbVar15 + 0x12)[(longlong)pFVar68] = pbVar15[0x12];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x24)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x24)[1] = 0;
    (pbVar15 + 0x13)[(longlong)pFVar68] = pbVar15[0x13];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x26)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x26)[1] = 0;
    (pbVar15 + 0x14)[(longlong)pFVar68] = pbVar15[0x14];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x28)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x28)[1] = 0;
    (pbVar15 + 0x15)[(longlong)pFVar68] = pbVar15[0x15];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x2a)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x2a)[1] = 0;
    (pbVar15 + 0x16)[(longlong)pFVar68] = pbVar15[0x16];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x2c)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x2c)[1] = 0;
    (pbVar15 + 0x17)[(longlong)pFVar68] = pbVar15[0x17];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x2e)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x2e)[1] = 0;
    (pbVar15 + 0x18)[(longlong)pFVar68] = pbVar15[0x18];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x30)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x30)[1] = 0;
    (pbVar15 + 0x19)[(longlong)pFVar68] = pbVar15[0x19];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x32)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x32)[1] = 0;
    (pbVar15 + 0x1a)[(longlong)pFVar68] = pbVar15[0x1a];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x34)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x34)[1] = 0;
    (pbVar15 + 0x1b)[(longlong)pFVar68] = pbVar15[0x1b];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x36)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x36)[1] = 0;
    (pbVar15 + 0x1c)[(longlong)pFVar68] = pbVar15[0x1c];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x38)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x38)[1] = 0;
    (pbVar15 + 0x1d)[(longlong)pFVar68] = pbVar15[0x1d];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x3a)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x3a)[1] = 0;
    (pbVar15 + 0x1e)[(longlong)pFVar68] = pbVar15[0x1e];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x3c)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x3c)[1] = 0;
    (pbVar15 + 0x1f)[(longlong)pFVar68] = pbVar15[0x1f];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x3e)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x3e)[1] = 0;
    (pbVar15 + 0x20)[(longlong)pFVar68] = pbVar15[0x20];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x40)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x40)[1] = 0;
    (pbVar15 + 0x21)[(longlong)pFVar68] = pbVar15[0x21];
    (pbVar4 + (longlong)pFVar68 * 2 + 0x42)[0] = 0;
    (pbVar4 + (longlong)pFVar68 * 2 + 0x42)[1] = 0;
    if (3 < (int)local_11f0[0]._p._4_4_) {
      _fwrite(*(void **)PTR____stderrp_024a98a0,1,local_11f0[0]._p._4_4_,pFVar68);
    }
    iVar28 = *piVar13;
    lVar43 = 0;
    do {
      iVar48 = piVar13[lVar43 + 1];
      piVar13[lVar43 + 1] = iVar28 + iVar48;
      iVar28 = iVar28 + iVar48 + piVar13[lVar43 + 2];
      piVar13[lVar43 + 2] = iVar28;
      iVar28 = iVar28 + piVar13[lVar43 + 3];
      piVar13[lVar43 + 3] = iVar28;
      iVar28 = iVar28 + piVar13[lVar43 + 4];
      piVar13[lVar43 + 4] = iVar28;
      lVar43 = lVar43 + 4;
    } while (lVar43 != 0x10000);
    uVar51 = (ushort)*pbVar15 << 8;
    uVar38 = (ulonglong)(uVar10 + 3);
    do {
      iVar48 = (int)uVar38;
      uVar63 = iVar48 - 4;
      uVar38 = (ulonglong)uVar63;
      bVar33 = pbVar15[uVar38];
      uVar51 = (ushort)bVar33 << 8 | uVar51 >> 8;
      iVar28 = piVar13[uVar51];
      piVar13[uVar51] = iVar28 + -1;
      *(uint *)(lVar14 + (longlong)(iVar28 + -1) * 4) = uVar63;
      bVar8 = pbVar15[iVar48 - 5U];
      uVar51 = CONCAT11(bVar8,bVar33);
      iVar28 = piVar13[uVar51];
      piVar13[uVar51] = iVar28 + -1;
      *(uint *)(lVar14 + (longlong)(iVar28 + -1) * 4) = iVar48 - 5U;
      bVar33 = pbVar15[iVar48 - 6U];
      uVar51 = CONCAT11(bVar33,bVar8);
      iVar28 = piVar13[uVar51];
      piVar13[uVar51] = iVar28 + -1;
      *(uint *)(lVar14 + (longlong)(iVar28 + -1) * 4) = iVar48 - 6U;
      uVar51 = CONCAT11(pbVar15[iVar48 - 7U],bVar33);
      iVar28 = piVar13[uVar51];
      piVar13[uVar51] = iVar28 + -1;
      *(uint *)(lVar14 + (longlong)(iVar28 + -1) * 4) = iVar48 - 7U;
    } while (6 < (int)uVar63);
    if (3 < (int)uVar63) {
      uVar63 = iVar48 - 8;
      lVar43 = (ulonglong)uVar63 + 1;
      do {
        uVar51 = uVar51 >> 8 | (ushort)pbVar15[lVar43 + -1] << 8;
        iVar28 = piVar13[uVar51];
        piVar13[uVar51] = iVar28 + -1;
        *(uint *)(lVar14 + (longlong)(iVar28 + -1) * 4) = uVar63;
        uVar63 = uVar63 - 1;
        lVar44 = lVar43 + -1;
        bVar16 = 0 < lVar43;
        lVar43 = lVar44;
      } while (lVar44 != 0 && bVar16);
    }
    local_8f8 = 0;
    uStack_8f0 = 0;
    local_908 = 0;
    uStack_900 = 0;
    local_918 = 0;
    uStack_910 = 0;
    local_928 = 0;
    uStack_920 = 0;
    local_938 = 0;
    uStack_930 = 0;
    local_948 = 0;
    uStack_940 = 0;
    local_958 = 0;
    uStack_950 = 0;
    local_968 = 0;
    uStack_960 = 0;
    local_978 = 0;
    uStack_970 = 0;
    local_988 = 0;
    uStack_980 = 0;
    local_998 = 0;
    uStack_990 = 0;
    local_9a8 = 0;
    uStack_9a0 = 0;
    local_9b8 = 0;
    uStack_9b0 = 0;
    local_9c8 = 0;
    uStack_9c0 = 0;
    local_9d8 = 0;
    uStack_9d0 = 0;
    local_9e8 = 0;
    uStack_9e0 = 0;
    local_8e8 = _DAT_0238fcc0;
    uStack_8e0 = _UNK_0238fcc8;
    local_8d8 = _DAT_0238ff10;
    uStack_8d0 = _UNK_0238ff18;
    local_8c8 = _DAT_0241c0b0;
    uStack_8c0 = _UNK_0241c0b8;
    local_8b8 = _DAT_023e1c30;
    uStack_8b0 = _UNK_023e1c38;
    local_8a8 = _DAT_023e1c40;
    uStack_8a0 = _UNK_023e1c48;
    local_898 = _DAT_023e1c50;
    uStack_890 = _UNK_023e1c58;
    local_888 = _DAT_023e1c60;
    uStack_880 = _UNK_023e1c68;
    local_878 = _DAT_023e1c70;
    uStack_870 = _UNK_023e1c78;
    local_868 = _DAT_023e1c80;
    uStack_860 = _UNK_023e1c88;
    local_858 = _DAT_023e1c90;
    uStack_850 = _UNK_023e1c98;
    local_848 = _DAT_023e1ca0;
    uStack_840 = _UNK_023e1ca8;
    local_838 = _DAT_023e1cb0;
    uStack_830 = _UNK_023e1cb8;
    local_828 = _DAT_023e1cc0;
    uStack_820 = _UNK_023e1cc8;
    local_818 = _DAT_023e1cd0;
    uStack_810 = _UNK_023e1cd8;
    local_808 = _DAT_023e1ce0;
    uStack_800 = _UNK_023e1ce8;
    local_7f8 = _DAT_023e1cf0;
    uStack_7f0 = _UNK_023e1cf8;
    local_7e8 = _DAT_023e1d00;
    uStack_7e0 = _UNK_023e1d08;
    local_7d8 = _DAT_023e1d10;
    uStack_7d0 = _UNK_023e1d18;
    local_7c8 = _DAT_023e1d20;
    uStack_7c0 = _UNK_023e1d28;
    local_7b8 = _DAT_023e1d30;
    uStack_7b0 = _UNK_023e1d38;
    local_7a8 = _DAT_023e1d40;
    uStack_7a0 = _UNK_023e1d48;
    local_798 = _DAT_023e1d50;
    uStack_790 = _UNK_023e1d58;
    local_788 = _DAT_023e1d60;
    uStack_780 = _UNK_023e1d68;
    local_778 = _DAT_023e1d70;
    uStack_770 = _UNK_023e1d78;
    local_768 = _DAT_023e1d80;
    uStack_760 = _UNK_023e1d88;
    local_758 = _DAT_023e1d90;
    uStack_750 = _UNK_023e1d98;
    local_748 = _DAT_023e1da0;
    uStack_740 = _UNK_023e1da8;
    local_738 = _DAT_023e1db0;
    uStack_730 = _UNK_023e1db8;
    local_728 = _DAT_023e1dc0;
    uStack_720 = _UNK_023e1dc8;
    local_718 = _DAT_023e1dd0;
    uStack_710 = _UNK_023e1dd8;
    local_708 = _DAT_023e1de0;
    uStack_700 = _UNK_023e1de8;
    local_6f8 = _DAT_023e1df0;
    uStack_6f0 = _UNK_023e1df8;
    local_6e8 = _DAT_023e1e00;
    uStack_6e0 = _UNK_023e1e08;
    local_6d8 = _DAT_023e1e10;
    uStack_6d0 = _UNK_023e1e18;
    local_6c8 = _DAT_023e1e20;
    uStack_6c0 = _UNK_023e1e28;
    local_6b8 = _DAT_023e1e30;
    uStack_6b0 = _UNK_023e1e38;
    local_6a8 = _DAT_023e1e40;
    uStack_6a0 = _UNK_023e1e48;
    local_698 = _DAT_023e1e50;
    uStack_690 = _UNK_023e1e58;
    local_688 = _DAT_023e1e60;
    uStack_680 = _UNK_023e1e68;
    local_678 = _DAT_023e1e70;
    uStack_670 = _UNK_023e1e78;
    local_668 = _DAT_023e1e80;
    uStack_660 = _UNK_023e1e88;
    local_658 = _DAT_023e1e90;
    uStack_650 = _UNK_023e1e98;
    local_648 = _DAT_023e1ea0;
    uStack_640 = _UNK_023e1ea8;
    local_638 = _DAT_023e1eb0;
    uStack_630 = _UNK_023e1eb8;
    local_628 = _DAT_023e1ec0;
    uStack_620 = _UNK_023e1ec8;
    local_618 = _DAT_023e1ed0;
    uStack_610 = _UNK_023e1ed8;
    local_608 = _DAT_023e1ee0;
    uStack_600 = _UNK_023e1ee8;
    local_5f8 = _DAT_023e1ef0;
    uStack_5f0 = _UNK_023e1ef8;
    local_5e8 = _DAT_023e1f00;
    uStack_5e0 = _UNK_023e1f08;
    local_5d8 = _DAT_023e1f10;
    uStack_5d0 = _UNK_023e1f18;
    local_5c8 = _DAT_023e1f20;
    uStack_5c0 = _UNK_023e1f28;
    local_5b8 = _DAT_023e1f30;
    uStack_5b0 = _UNK_023e1f38;
    local_5a8 = _DAT_023e1f40;
    uStack_5a0 = _UNK_023e1f48;
    local_598 = _DAT_023e1f50;
    uStack_590 = _UNK_023e1f58;
    local_588 = _DAT_023e1f60;
    uStack_580 = _UNK_023e1f68;
    local_578 = _DAT_023e1f70;
    uStack_570 = _UNK_023e1f78;
    local_568 = _DAT_023e1f80;
    uStack_560 = _UNK_023e1f88;
    local_558 = _DAT_023e1f90;
    uStack_550 = _UNK_023e1f98;
    local_548 = _DAT_023e1fa0;
    uStack_540 = _UNK_023e1fa8;
    local_538 = _DAT_023e1fb0;
    uStack_530 = _UNK_023e1fb8;
    local_528 = _DAT_023e1fc0;
    uStack_520 = _UNK_023e1fc8;
    local_518 = _DAT_023e1fd0;
    uStack_510 = _UNK_023e1fd8;
    local_508 = _DAT_023e1fe0;
    uStack_500 = _UNK_023e1fe8;
    local_4f8 = _DAT_023e1ff0;
    uStack_4f0 = _UNK_023e1ff8;
    lVar43 = 0x79;
    lVar44 = -0x7900000000;
    do {
      iVar28 = *(int *)((longlong)&local_8e8 + lVar43 * 4);
      iVar52 = iVar28 * 0x100;
      iVar48 = piVar13[iVar52 + 0x100];
      iVar52 = piVar13[iVar52];
      iVar55 = auStack_de8[lVar43 + 199] * 0x100;
      lVar50 = lVar43;
      if ((uint)(iVar48 - iVar52) < (uint)(piVar13[iVar55 + 0x100] - piVar13[iVar55])) {
        lVar50 = (longlong)((int)lVar43 + -0x79);
        *(uint *)((longlong)&local_8e8 + lVar43 * 4) = auStack_de8[lVar43 + 199];
        if ((0xf1 < (int)lVar43) &&
           (uVar63 = *(uint *)((longlong)&local_8e8 + (lVar44 >> 0x1e)), iVar55 = uVar63 * 0x100,
           (uint)(iVar48 - iVar52) < (uint)(piVar13[iVar55 + 0x100] - piVar13[iVar55]))) {
          lVar50 = lVar44 >> 0x20;
          auStack_de8[lVar43 + 199] = uVar63;
        }
      }
      *(int *)((longlong)&local_8e8 + lVar50 * 4) = iVar28;
      lVar43 = lVar43 + 1;
      lVar44 = lVar44 + 0x100000000;
    } while ((int)lVar43 != 0x100);
    lVar43 = 0x28;
    lVar44 = -0xc800000000;
    do {
      iVar28 = *(int *)((longlong)&local_988 + lVar43 * 4);
      iVar48 = *(int *)((longlong)&local_8e8 + lVar43 * 4);
      iVar52 = iVar48 * 0x100;
      uVar63 = piVar13[iVar52 + 0x100] - piVar13[iVar52];
      iVar52 = iVar28 * 0x100;
      lVar50 = lVar43;
      if (uVar63 < (uint)(piVar13[iVar52 + 0x100] - piVar13[iVar52])) {
        iVar52 = (int)lVar43;
        lVar50 = (longlong)(iVar52 + -0x28);
        *(int *)((longlong)&local_8e8 + lVar43 * 4) = iVar28;
        if ((0x4f < iVar52) &&
           (iVar28 = auStack_de8[lVar43 + 0xf0] * 0x100,
           uVar63 < (uint)(piVar13[iVar28 + 0x100] - piVar13[iVar28]))) {
          lVar50 = (longlong)(iVar52 + -0x50);
          *(uint *)((longlong)&local_988 + lVar43 * 4) = auStack_de8[lVar43 + 0xf0];
          if ((0x77 < iVar52) &&
             (iVar28 = auStack_de8[lVar43 + 200] * 0x100,
             uVar63 < (uint)(piVar13[iVar28 + 0x100] - piVar13[iVar28]))) {
            lVar50 = (longlong)(iVar52 + -0x78);
            auStack_de8[lVar43 + 0xf0] = auStack_de8[lVar43 + 200];
            if ((0x9f < iVar52) &&
               (iVar28 = auStack_de8[lVar43 + 0xa0] * 0x100,
               uVar63 < (uint)(piVar13[iVar28 + 0x100] - piVar13[iVar28]))) {
              lVar50 = (longlong)(iVar52 + -0xa0);
              auStack_de8[lVar43 + 200] = auStack_de8[lVar43 + 0xa0];
              if ((199 < iVar52) &&
                 (iVar28 = auStack_de8[lVar43 + 0x78] * 0x100,
                 uVar63 < (uint)(piVar13[iVar28 + 0x100] - piVar13[iVar28]))) {
                lVar50 = (longlong)(iVar52 + -200);
                auStack_de8[lVar43 + 0xa0] = auStack_de8[lVar43 + 0x78];
                if ((0xef < iVar52) &&
                   (uVar53 = *(uint *)((longlong)&local_8e8 + (lVar44 >> 0x1e)),
                   iVar28 = uVar53 * 0x100,
                   uVar63 < (uint)(piVar13[iVar28 + 0x100] - piVar13[iVar28]))) {
                  lVar50 = lVar44 >> 0x20;
                  auStack_de8[lVar43 + 0x78] = uVar53;
                }
              }
            }
          }
        }
      }
      *(int *)((longlong)&local_8e8 + lVar50 * 4) = iVar48;
      lVar43 = lVar43 + 1;
      lVar44 = lVar44 + 0x100000000;
    } while ((int)lVar43 != 0x100);
    lVar43 = 0xd;
    do {
      iVar28 = *(int *)((longlong)&local_8e8 + lVar43 * 4);
      iVar52 = iVar28 * 0x100;
      iVar48 = piVar13[iVar52 + 0x100];
      iVar52 = piVar13[iVar52];
      lVar44 = lVar43;
      do {
        iVar55 = *(int *)((longlong)&uStack_920 + lVar44 * 4 + 4);
        iVar62 = iVar55 * 0x100;
        lVar50 = lVar44;
        if ((uint)(piVar13[iVar62 + 0x100] - piVar13[iVar62]) <= (uint)(iVar48 - iVar52)) break;
        *(int *)((longlong)&local_8e8 + lVar44 * 4) = iVar55;
        lVar50 = lVar44 + -0xd;
        iVar55 = (int)lVar44;
        lVar44 = lVar50;
      } while (0x19 < iVar55);
      *(int *)((longlong)&local_8e8 + lVar50 * 4) = iVar28;
      lVar43 = lVar43 + 1;
    } while ((int)lVar43 != 0x100);
    lVar43 = 4;
    do {
      iVar28 = *(int *)((longlong)&local_8e8 + lVar43 * 4);
      iVar52 = iVar28 * 0x100;
      iVar48 = piVar13[iVar52 + 0x100];
      iVar52 = piVar13[iVar52];
      lVar44 = lVar43;
      do {
        iVar55 = *(int *)((longlong)&local_8f8 + lVar44 * 4);
        iVar62 = iVar55 * 0x100;
        lVar50 = lVar44;
        if ((uint)(piVar13[iVar62 + 0x100] - piVar13[iVar62]) <= (uint)(iVar48 - iVar52)) break;
        *(int *)((longlong)&local_8e8 + lVar44 * 4) = iVar55;
        lVar50 = lVar44 + -4;
        iVar55 = (int)lVar44;
        lVar44 = lVar50;
      } while (7 < iVar55);
      *(int *)((longlong)&local_8e8 + lVar50 * 4) = iVar28;
      lVar43 = lVar43 + 1;
    } while ((int)lVar43 != 0x100);
    lVar43 = 1;
    do {
      uVar63 = *(uint *)((longlong)&local_8e8 + lVar43 * 4);
      pFVar61 = (FILE *)(ulonglong)uVar63;
      iVar28 = piVar13[(int)(uVar63 * 0x100 + 0x100)];
      iVar48 = piVar13[(int)(uVar63 * 0x100)];
      lVar44 = lVar43;
      do {
        iVar52 = *(int *)((longlong)&uStack_8f0 + lVar44 * 4 + 4);
        iVar55 = iVar52 * 0x100;
        lVar50 = lVar44;
        if ((uint)(piVar13[iVar55 + 0x100] - piVar13[iVar55]) <= (uint)(iVar28 - iVar48)) break;
        *(int *)((longlong)&local_8e8 + lVar44 * 4) = iVar52;
        lVar50 = lVar44 + -1;
        iVar52 = (int)lVar44;
        lVar44 = lVar50;
      } while (1 < iVar52);
      *(uint *)((longlong)&local_8e8 + lVar50 * 4) = uVar63;
      lVar43 = lVar43 + 1;
      if ((int)lVar43 == 0x100) {
        lVar43 = lVar14 + 0x30;
        local_1260 = (FILE *)0x0;
        uVar38 = 0;
        sVar59 = local_11f0[0]._p._4_4_;
        do {
          uVar63 = *(uint *)((longlong)&local_8e8 + uVar38 * 4);
          lVar44 = (longlong)(int)uVar63;
          iVar28 = uVar63 * 0x100;
          pFVar29 = (FILE *)0x0;
          do {
            if (pFVar29 != (FILE *)(ulonglong)uVar63) {
              puVar1 = pFVar29->_ubuf + (longlong)iVar28 + -0x74;
              uVar53 = piVar13[(longlong)puVar1];
              if ((uVar53 & 0x200000) == 0) {
                uVar49 = uVar53 & 0xffdfffff;
                uVar56 = (piVar13[(longlong)(puVar1 + 1)] & 0xffdfffffU) - 1;
                uVar60 = uVar56 - uVar49;
                pFVar61 = (FILE *)(ulonglong)uVar60;
                if (uVar60 != 0 && (int)uVar49 <= (int)uVar56) {
                  if (3 < (int)sVar59) {
                    pFVar61 = (FILE *)(ulonglong)(uVar60 + 1);
                    _fprintf(pFVar29,(char *)(ulonglong)uVar63,local_1260);
                  }
                  local_1c8[0] = uVar49;
                  local_358[0] = uVar56;
                  local_4e8[0] = 2;
                  local_1268 = 1;
                  bVar16 = true;
                  uVar35 = 0;
                  puVar32 = local_4e8;
                  local_1250 = local_358;
                  local_1248 = local_1c8;
                  do {
                    if (bVar16) goto LAB_00e9bfea;
LAB_00e9bfe0:
                    FUN_00e9e160();
LAB_00e9bfea:
                    uVar53 = *local_1248;
                    pFVar37 = (FILE *)(ulonglong)uVar53;
                    uVar60 = *local_1250;
                    lVar50 = (longlong)(int)uVar60;
                    uVar11 = *puVar32;
                    iVar48 = uVar60 - uVar53;
                    if ((iVar48 < 0x14) || (0xe < (int)uVar11)) {
                      if (iVar48 < 1) goto LAB_00e9bf60;
                      uVar60 = 0xffffffff;
                      piVar36 = &DAT_023e2000;
                      do {
                        uVar60 = uVar60 + 1;
                        iVar52 = *piVar36;
                        piVar36 = piVar36 + 1;
                      } while (iVar52 <= iVar48);
                      if (uVar60 != 0) {
                        uVar42 = (ulonglong)uVar60;
                        do {
                          iVar55 = *(int *)(&DAT_023e1ffc + uVar42 * 4);
                          iVar62 = iVar55 + uVar53;
                          lVar30 = (longlong)iVar62;
                          local_1204 = uVar53;
                          iVar52 = uVar53 + 2;
                          iVar48 = uVar53 + 1;
                          while (lVar30 <= lVar50) {
                            uVar12 = *(undefined4 *)(lVar14 + lVar30 * 4);
                            uVar60 = local_1204;
                            do {
                              lVar46 = (longlong)(int)uVar60;
                              pFVar61 = local_11f0;
                              cVar25 = FUN_00e9df10(pbVar4,pbVar15,pFVar41);
                              if (cVar25 == '\0') {
                                lVar46 = (longlong)(int)(iVar55 + uVar60);
                                break;
                              }
                              *(undefined4 *)(lVar14 + (longlong)(int)(iVar55 + uVar60) * 4) =
                                   *(undefined4 *)(lVar14 + lVar46 * 4);
                              bVar16 = iVar62 <= (int)uVar60;
                              uVar60 = uVar60 - iVar55;
                            } while (bVar16);
                            *(undefined4 *)(lVar14 + lVar46 * 4) = uVar12;
                            if (lVar50 <= lVar30) break;
                            uVar12 = *(undefined4 *)(lVar14 + 4 + lVar30 * 4);
                            iVar27 = iVar48;
                            do {
                              lVar46 = (longlong)iVar27;
                              pFVar61 = local_11f0;
                              cVar25 = FUN_00e9df10(pbVar4,pbVar15,pFVar68);
                              if (cVar25 == '\0') {
                                lVar46 = (longlong)(iVar55 + iVar27);
                                break;
                              }
                              *(undefined4 *)(lVar14 + (longlong)(iVar55 + iVar27) * 4) =
                                   *(undefined4 *)(lVar14 + lVar46 * 4);
                              bVar16 = iVar62 <= iVar27;
                              iVar27 = iVar27 - iVar55;
                            } while (bVar16);
                            *(undefined4 *)(lVar14 + lVar46 * 4) = uVar12;
                            if (lVar50 < lVar30 + 2) break;
                            uVar12 = *(undefined4 *)(lVar14 + 8 + lVar30 * 4);
                            iVar27 = iVar52;
                            do {
                              lVar46 = (longlong)iVar27;
                              pFVar61 = local_11f0;
                              cVar25 = FUN_00e9df10(pbVar4,pbVar15,pFVar41);
                              if (cVar25 == '\0') {
                                lVar46 = (longlong)(iVar55 + iVar27);
                                break;
                              }
                              *(undefined4 *)(lVar14 + (longlong)(iVar55 + iVar27) * 4) =
                                   *(undefined4 *)(lVar14 + lVar46 * 4);
                              bVar16 = iVar62 <= iVar27;
                              iVar27 = iVar27 - iVar55;
                            } while (bVar16);
                            *(undefined4 *)(lVar14 + lVar46 * 4) = uVar12;
                            lVar30 = lVar30 + 3;
                            local_1204 = local_1204 + 3;
                            iVar48 = iVar48 + 3;
                            iVar52 = iVar52 + 3;
                            if ((int)local_11f0[0]._p < 0) goto LAB_00e9c9ea;
                          }
                          bVar16 = (longlong)uVar42 < 2;
                          uVar42 = uVar42 - 1;
                          if (bVar16) break;
                        } while( true );
                      }
LAB_00e9bf60:
                      local_1280 = uVar35;
                      if (-1 < (int)local_11f0[0]._p) goto LAB_00e9bf6e;
LAB_00e9c9ea:
                      sVar59 = local_11f0[0]._p._4_4_;
                      if (-1 < (int)local_11f0[0]._p) {
                        local_1260 = (FILE *)(ulonglong)(((int)local_1260 - uVar49) + uVar56 + 1);
                        uVar53 = piVar13[(longlong)puVar1];
                        break;
                      }
                      goto LAB_00e9cde6;
                    }
                    lVar30 = (longlong)(int)uVar53;
                    bVar33 = pbVar15[*(int *)(lVar14 + lVar30 * 4) + uVar11];
                    bVar8 = pbVar15[*(int *)(lVar14 + lVar50 * 4) + uVar11];
                    bVar9 = pbVar15[*(int *)(lVar14 + (longlong)((int)(uVar60 + uVar53) >> 1) * 4) +
                                    uVar11];
                    bVar24 = bVar33;
                    if (bVar8 < bVar33) {
                      bVar24 = bVar8;
                      bVar8 = bVar33;
                    }
                    if (bVar24 <= bVar9) {
                      bVar24 = bVar9;
                    }
                    if (bVar8 <= bVar9) {
                      bVar24 = bVar8;
                    }
                    uVar42 = (ulonglong)uVar60;
                    uVar70 = (ulonglong)uVar53;
                    uVar34 = (uint)bVar24;
                    uVar65 = uVar60;
                    if ((int)uVar60 < (int)uVar53) goto LAB_00e9c146;
LAB_00e9c099:
                    uVar70 = (ulonglong)(int)uVar70;
                    pFVar61 = pFVar37;
                    do {
                      uVar40 = (uint)pFVar61;
                      uVar64 = uVar65;
                      if ((int)uVar65 < (int)uVar40) {
                        uVar64 = uVar40;
                      }
                      piVar36 = (int *)(lVar14 + (longlong)(int)uVar40 * 4);
                      lVar50 = 0;
                      while( true ) {
                        iVar48 = *piVar36;
                        iVar52 = (int)lVar50;
                        if (pbVar15[uVar11 + iVar48] == uVar34) break;
                        if (0 < (int)(pbVar15[uVar11 + iVar48] - uVar34)) {
                          pFVar61 = (FILE *)(ulonglong)(uVar40 - iVar52);
                          pFVar37 = (FILE *)(ulonglong)(uVar40 - iVar52);
                          goto LAB_00e9c146;
                        }
                        lVar50 = lVar50 + -1;
                        piVar36 = piVar36 + 1;
                        if (~(longlong)(int)uVar64 + (longlong)(int)uVar40 == lVar50) {
                          uVar64 = uVar64 + 1;
                          pFVar37 = (FILE *)(ulonglong)uVar64;
                          if ((int)uVar65 < (int)uVar64) goto LAB_00e9c20e;
                          goto LAB_00e9c14f;
                        }
                      }
                      *piVar36 = *(int *)(lVar14 + uVar70 * 4);
                      *(int *)(lVar14 + uVar70 * 4) = iVar48;
                      uVar70 = uVar70 + 1;
                      pFVar61 = (FILE *)(ulonglong)((uVar40 - iVar52) + 1);
                    } while ((int)(uVar40 - iVar52) < (int)uVar65);
                    uVar64 = (uVar40 - iVar52) + 1;
                    pFVar61 = (FILE *)(ulonglong)uVar64;
                    pFVar37 = (FILE *)(ulonglong)uVar64;
                    if ((int)uVar64 <= (int)uVar65) {
LAB_00e9c14f:
                      iVar48 = (int)uVar70;
                      uVar64 = (uint)pFVar37;
                      lVar50 = (longlong)(int)uVar64;
                      uVar42 = (ulonglong)(int)uVar42;
                      do {
                        pFVar61 = (FILE *)(longlong)(int)uVar65;
                        pFVar37 = (FILE *)((longlong)&pFVar61->_p + 1);
                        uVar40 = uVar65;
                        while( true ) {
                          iVar52 = *(int *)(lVar14 + -4 + (longlong)pFVar37 * 4);
                          if (pbVar15[iVar52 + uVar11] == uVar34) break;
                          if ((int)(pbVar15[iVar52 + uVar11] - uVar34) < 0) {
                            uVar12 = *(undefined4 *)(lVar14 + lVar50 * 4);
                            *(int *)(lVar14 + lVar50 * 4) = iVar52;
                            *(undefined4 *)(lVar14 + -4 + (longlong)pFVar37 * 4) = uVar12;
                            pFVar37 = (FILE *)(ulonglong)(uVar64 + 1);
                            uVar65 = uVar40 - 1;
                            if ((int)uVar65 < (int)(uVar64 + 1)) goto LAB_00e9c146;
                            goto LAB_00e9c099;
                          }
                          uVar40 = uVar40 - 1;
                          pFVar37 = (FILE *)((longlong)(pFVar37 + 0xffffffffffffffff) + 0x97);
                          if ((longlong)pFVar37 <= lVar50) {
                            uVar34 = uVar64;
                            if ((longlong)pFVar61 < lVar50) {
                              uVar34 = uVar65;
                            }
                            uVar65 = uVar34 - 1;
                            goto LAB_00e9c20e;
                          }
                        }
                        *(undefined4 *)(lVar14 + -4 + (longlong)pFVar37 * 4) =
                             *(undefined4 *)(lVar14 + uVar42 * 4);
                        *(int *)(lVar14 + uVar42 * 4) = iVar52;
                        uVar42 = uVar42 - 1;
                        uVar65 = uVar40 - 1;
                      } while ((int)uVar64 < (int)uVar40);
                      uVar65 = uVar40 - 1;
                      if (iVar48 <= (int)uVar42) goto LAB_00e9c260;
                      goto LAB_00e9c21a;
                    }
LAB_00e9c20e:
                    iVar48 = (int)uVar70;
                    if ((int)uVar42 < iVar48) goto LAB_00e9c21a;
LAB_00e9c260:
                    iVar52 = uVar64 - iVar48;
                    if ((int)(iVar48 - uVar53) < (int)(uVar64 - iVar48)) {
                      iVar52 = iVar48 - uVar53;
                    }
                    if (iVar52 < 1) goto LAB_00e9c3ea;
                    lVar50 = (longlong)(int)(uVar64 - iVar52);
                    uVar70 = (ulonglong)(iVar52 - 1U);
                    if ((iVar52 - 1U < 7) ||
                       (((ulonglong)(lVar14 + lVar30 * 4) < lVar14 + (lVar50 + uVar70) * 4 + 4 &&
                        ((ulonglong)(lVar14 + lVar50 * 4) < lVar14 + (lVar30 + uVar70) * 4 + 4))))
                    goto LAB_00e9c3c0;
                    uVar67 = uVar70 + 1 & 0x1fffffff8;
                    uVar45 = (uVar67 - 8 >> 3) + 1;
                    if (uVar67 - 8 == 0) {
                      lVar46 = 0;
                      goto LAB_00e9c37c;
                    }
                    lVar2 = lVar43 + lVar30 * 4;
                    lVar3 = lVar43 + lVar50 * 4;
                    lVar31 = -(uVar45 & 0xfffffffffffffffe);
                    lVar46 = 0;
                    do {
                      puVar5 = (undefined8 *)(lVar2 + -0x30 + lVar46 * 4);
                      uVar17 = *puVar5;
                      uVar18 = puVar5[1];
                      puVar5 = (undefined8 *)(lVar2 + -0x20 + lVar46 * 4);
                      uVar19 = *puVar5;
                      uVar20 = puVar5[1];
                      puVar5 = (undefined8 *)(lVar3 + -0x30 + lVar46 * 4);
                      uVar21 = puVar5[1];
                      puVar6 = (undefined8 *)(lVar3 + -0x20 + lVar46 * 4);
                      uVar22 = *puVar6;
                      uVar23 = puVar6[1];
                      puVar6 = (undefined8 *)(lVar2 + -0x30 + lVar46 * 4);
                      *puVar6 = *puVar5;
                      puVar6[1] = uVar21;
                      puVar5 = (undefined8 *)(lVar2 + -0x20 + lVar46 * 4);
                      *puVar5 = uVar22;
                      puVar5[1] = uVar23;
                      puVar5 = (undefined8 *)(lVar3 + -0x30 + lVar46 * 4);
                      *puVar5 = uVar17;
                      puVar5[1] = uVar18;
                      puVar5 = (undefined8 *)(lVar3 + -0x20 + lVar46 * 4);
                      *puVar5 = uVar19;
                      puVar5[1] = uVar20;
                      puVar5 = (undefined8 *)(lVar2 + -0x10 + lVar46 * 4);
                      uVar17 = *puVar5;
                      uVar18 = puVar5[1];
                      puVar5 = (undefined8 *)(lVar2 + lVar46 * 4);
                      uVar19 = *puVar5;
                      uVar20 = puVar5[1];
                      puVar5 = (undefined8 *)(lVar3 + -0x10 + lVar46 * 4);
                      uVar21 = puVar5[1];
                      puVar6 = (undefined8 *)(lVar3 + lVar46 * 4);
                      uVar22 = *puVar6;
                      uVar23 = puVar6[1];
                      puVar6 = (undefined8 *)(lVar2 + -0x10 + lVar46 * 4);
                      *puVar6 = *puVar5;
                      puVar6[1] = uVar21;
                      puVar5 = (undefined8 *)(lVar2 + lVar46 * 4);
                      *puVar5 = uVar22;
                      puVar5[1] = uVar23;
                      puVar5 = (undefined8 *)(lVar3 + -0x10 + lVar46 * 4);
                      *puVar5 = uVar17;
                      puVar5[1] = uVar18;
                      puVar5 = (undefined8 *)(lVar3 + lVar46 * 4);
                      *puVar5 = uVar19;
                      puVar5[1] = uVar20;
                      lVar46 = lVar46 + 0x10;
                      lVar31 = lVar31 + 2;
                    } while (lVar31 != 0);
                    if ((uVar45 & 1) != 0) {
LAB_00e9c37c:
                      lVar2 = lVar46 + lVar30;
                      lVar46 = lVar46 + lVar50;
                      puVar5 = (undefined8 *)(lVar14 + lVar2 * 4);
                      uVar17 = *puVar5;
                      uVar18 = puVar5[1];
                      puVar5 = (undefined8 *)(lVar14 + 0x10 + lVar2 * 4);
                      uVar19 = *puVar5;
                      uVar20 = puVar5[1];
                      puVar5 = (undefined8 *)(lVar14 + lVar46 * 4);
                      uVar21 = puVar5[1];
                      puVar6 = (undefined8 *)(lVar14 + 0x10 + lVar46 * 4);
                      uVar22 = *puVar6;
                      uVar23 = puVar6[1];
                      puVar6 = (undefined8 *)(lVar14 + lVar2 * 4);
                      *puVar6 = *puVar5;
                      puVar6[1] = uVar21;
                      puVar5 = (undefined8 *)(lVar14 + 0x10 + lVar2 * 4);
                      *puVar5 = uVar22;
                      puVar5[1] = uVar23;
                      puVar5 = (undefined8 *)(lVar14 + lVar46 * 4);
                      *puVar5 = uVar17;
                      puVar5[1] = uVar18;
                      puVar5 = (undefined8 *)(lVar14 + 0x10 + lVar46 * 4);
                      *puVar5 = uVar19;
                      puVar5[1] = uVar20;
                    }
                    if (uVar70 + 1 != uVar67) {
                      lVar30 = lVar30 + uVar67;
                      lVar50 = lVar50 + uVar67;
                      iVar52 = iVar52 - (int)uVar67;
LAB_00e9c3c0:
                      iVar52 = iVar52 + 1;
                      lVar46 = lVar14;
                      do {
                        uVar12 = *(undefined4 *)(lVar46 + lVar30 * 4);
                        *(undefined4 *)(lVar46 + lVar30 * 4) = *(undefined4 *)(lVar46 + lVar50 * 4);
                        *(undefined4 *)(lVar46 + lVar50 * 4) = uVar12;
                        lVar46 = lVar46 + 4;
                        iVar52 = iVar52 + -1;
                      } while (1 < iVar52);
                    }
LAB_00e9c3ea:
                    iVar52 = uVar60 - (int)uVar42;
                    iVar55 = (int)uVar42 - uVar65;
                    if (iVar55 <= iVar52) {
                      iVar52 = iVar55;
                    }
                    if (0 < iVar52) {
                      lVar30 = (longlong)(int)(uVar60 - iVar52);
                      lVar50 = (longlong)(int)uVar64;
                      uVar42 = (ulonglong)(iVar52 - 1U);
                      if ((6 < iVar52 - 1U) &&
                         ((lVar14 + (lVar30 + uVar42) * 4 + 8 <= (ulonglong)(lVar14 + lVar50 * 4) ||
                          (lVar14 + (lVar50 + uVar42) * 4 + 4 <= lVar14 + lVar30 * 4 + 4U)))) {
                        uVar70 = uVar42 + 1 & 0x1fffffff8;
                        uVar45 = (uVar70 - 8 >> 3) + 1;
                        if (uVar70 - 8 == 0) {
                          lVar46 = 0;
LAB_00e9c50c:
                          lVar2 = lVar46 + lVar50;
                          lVar46 = lVar46 + lVar30;
                          puVar5 = (undefined8 *)(lVar14 + lVar2 * 4);
                          uVar17 = *puVar5;
                          uVar18 = puVar5[1];
                          puVar5 = (undefined8 *)(lVar14 + 0x10 + lVar2 * 4);
                          uVar19 = *puVar5;
                          uVar20 = puVar5[1];
                          puVar6 = (undefined8 *)(lVar14 + 4 + lVar46 * 4);
                          uVar21 = puVar6[1];
                          puVar5 = (undefined8 *)(lVar14 + 0x14 + lVar46 * 4);
                          uVar22 = *puVar5;
                          uVar23 = puVar5[1];
                          puVar5 = (undefined8 *)(lVar14 + lVar2 * 4);
                          *puVar5 = *puVar6;
                          puVar5[1] = uVar21;
                          puVar5 = (undefined8 *)(lVar14 + 0x10 + lVar2 * 4);
                          *puVar5 = uVar22;
                          puVar5[1] = uVar23;
                          puVar5 = (undefined8 *)(lVar14 + 4 + lVar46 * 4);
                          *puVar5 = uVar17;
                          puVar5[1] = uVar18;
                          puVar5 = (undefined8 *)(lVar14 + 0x14 + lVar46 * 4);
                          *puVar5 = uVar19;
                          puVar5[1] = uVar20;
                        }
                        else {
                          lVar2 = lVar43 + lVar50 * 4;
                          lVar3 = lVar14 + 0x34 + lVar30 * 4;
                          lVar31 = -(uVar45 & 0xfffffffffffffffe);
                          lVar46 = 0;
                          do {
                            puVar5 = (undefined8 *)(lVar2 + -0x30 + lVar46 * 4);
                            uVar17 = *puVar5;
                            uVar18 = puVar5[1];
                            puVar5 = (undefined8 *)(lVar2 + -0x20 + lVar46 * 4);
                            uVar19 = *puVar5;
                            uVar20 = puVar5[1];
                            puVar5 = (undefined8 *)(lVar3 + -0x30 + lVar46 * 4);
                            uVar21 = puVar5[1];
                            puVar6 = (undefined8 *)(lVar3 + -0x20 + lVar46 * 4);
                            uVar22 = *puVar6;
                            uVar23 = puVar6[1];
                            puVar6 = (undefined8 *)(lVar2 + -0x30 + lVar46 * 4);
                            *puVar6 = *puVar5;
                            puVar6[1] = uVar21;
                            puVar5 = (undefined8 *)(lVar2 + -0x20 + lVar46 * 4);
                            *puVar5 = uVar22;
                            puVar5[1] = uVar23;
                            puVar5 = (undefined8 *)(lVar3 + -0x30 + lVar46 * 4);
                            *puVar5 = uVar17;
                            puVar5[1] = uVar18;
                            puVar5 = (undefined8 *)(lVar3 + -0x20 + lVar46 * 4);
                            *puVar5 = uVar19;
                            puVar5[1] = uVar20;
                            puVar5 = (undefined8 *)(lVar2 + -0x10 + lVar46 * 4);
                            uVar17 = *puVar5;
                            uVar18 = puVar5[1];
                            puVar5 = (undefined8 *)(lVar2 + lVar46 * 4);
                            uVar19 = *puVar5;
                            uVar20 = puVar5[1];
                            puVar6 = (undefined8 *)(lVar3 + -0x10 + lVar46 * 4);
                            uVar21 = puVar6[1];
                            puVar5 = (undefined8 *)(lVar3 + lVar46 * 4);
                            uVar22 = *puVar5;
                            uVar23 = puVar5[1];
                            puVar5 = (undefined8 *)(lVar2 + -0x10 + lVar46 * 4);
                            *puVar5 = *puVar6;
                            puVar5[1] = uVar21;
                            puVar5 = (undefined8 *)(lVar2 + lVar46 * 4);
                            *puVar5 = uVar22;
                            puVar5[1] = uVar23;
                            puVar5 = (undefined8 *)(lVar3 + -0x10 + lVar46 * 4);
                            *puVar5 = uVar17;
                            puVar5[1] = uVar18;
                            puVar5 = (undefined8 *)(lVar3 + lVar46 * 4);
                            *puVar5 = uVar19;
                            puVar5[1] = uVar20;
                            lVar46 = lVar46 + 0x10;
                            lVar31 = lVar31 + 2;
                          } while (lVar31 != 0);
                          if ((uVar45 & 1) != 0) goto LAB_00e9c50c;
                        }
                        if (uVar42 + 1 == uVar70) goto LAB_00e9c57c;
                        lVar50 = lVar50 + uVar70;
                        lVar30 = lVar30 + uVar70;
                        iVar52 = iVar52 - (int)uVar70;
                      }
                      iVar52 = iVar52 + 1;
                      lVar46 = lVar14;
                      do {
                        uVar12 = *(undefined4 *)(lVar46 + lVar50 * 4);
                        *(undefined4 *)(lVar46 + lVar50 * 4) =
                             *(undefined4 *)(lVar46 + 4 + lVar30 * 4);
                        *(undefined4 *)(lVar46 + 4 + lVar30 * 4) = uVar12;
                        lVar46 = lVar46 + 4;
                        iVar52 = iVar52 + -1;
                      } while (1 < iVar52);
                    }
LAB_00e9c57c:
                    uVar69 = (uVar53 - iVar48) + uVar64;
                    uVar34 = ((uVar53 - iVar48) + uVar64) - 1;
                    uVar66 = uVar60 - iVar55;
                    uVar65 = uVar66 + 1;
                    iVar48 = uVar60 - uVar65;
                    uVar64 = uVar60;
                    uVar40 = uVar53;
                    if ((int)(uVar34 - uVar53) < iVar48) {
                      iVar48 = uVar34 - uVar53;
                      uVar64 = uVar34;
                      uVar40 = uVar65;
                      uVar65 = uVar53;
                      uVar34 = uVar60;
                    }
                    uVar53 = uVar11 + 1;
                    uVar60 = uVar64;
                    uVar54 = uVar11;
                    uVar57 = uVar65;
                    if (iVar48 < (int)(uVar66 - uVar69)) {
                      uVar60 = uVar66;
                      uVar54 = uVar53;
                      iVar48 = uVar66 - uVar69;
                      uVar57 = uVar69;
                      uVar69 = uVar65;
                      uVar66 = uVar64;
                      uVar53 = uVar11;
                    }
                    pFVar61 = (FILE *)(ulonglong)uVar53;
                    uVar65 = uVar34;
                    uVar64 = uVar11;
                    uVar58 = uVar40;
                    if ((int)(uVar34 - uVar40) < iVar48) {
                      uVar65 = uVar60;
                      uVar64 = uVar54;
                      uVar58 = uVar57;
                      uVar57 = uVar40;
                      uVar60 = uVar34;
                      uVar54 = uVar11;
                    }
                    local_1c8[uVar35] = uVar58;
                    local_358[uVar35] = uVar65;
                    *puVar32 = uVar64;
                    lVar50 = (longlong)(int)local_1268;
                    local_1c8[lVar50] = uVar57;
                    local_358[lVar50] = uVar60;
                    local_4e8[lVar50] = uVar54;
                    local_1c8[lVar50 + 1] = uVar69;
                    local_358[lVar50 + 1] = uVar66;
                    local_4e8[lVar50 + 1] = uVar53;
                    local_1280 = (ulonglong)((int)local_1268 + 2);
LAB_00e9bf6e:
                    iVar48 = (int)local_1280;
                    bVar16 = iVar48 < 0x62;
                    uVar35 = (ulonglong)(iVar48 - 1);
                    local_1248 = local_1c8 + uVar35;
                    local_1250 = local_358 + uVar35;
                    puVar32 = local_4e8 + uVar35;
                    local_1268 = local_1280;
                    if (iVar48 < 1) goto LAB_00e9c9ea;
                  } while( true );
                }
              }
              piVar13[(longlong)puVar1] = uVar53 | 0x200000;
            }
            pFVar29 = (FILE *)((longlong)&pFVar29->_p + 1);
          } while (pFVar29 != (FILE *)&section_000000b8.reserved2);
          if (*(char *)((longlong)&local_9e8 + lVar44) != '\0') {
            FUN_00e9e160();
            sVar59 = local_11f0[0]._p._4_4_;
          }
          puVar32 = (uint *)(piVar13 + lVar44 + 0x101);
          lVar50 = 0;
          do {
            auStack_de8[lVar50] = puVar32[-0x101] & 0xffdfffff;
            *(uint *)(local_11f0[0]._ubuf + lVar50 * 4 + -0x6c) = (puVar32[-0x100] & 0xffdfffff) - 1
            ;
            auStack_de8[lVar50 + 1] = puVar32[-1] & 0xffdfffff;
            *(uint *)(local_11f0[0]._ubuf + lVar50 * 4 + -0x68) = (*puVar32 & 0xffdfffff) - 1;
            lVar50 = lVar50 + 2;
            puVar32 = puVar32 + 0x200;
          } while (lVar50 != 0x100);
          uVar35 = (longlong)piVar13[iVar28] & 0xffffffffffdfffff;
          uVar63 = auStack_de8[lVar44];
          if ((int)uVar35 < (int)uVar63) {
            do {
              iVar48 = *(int *)(lVar14 + uVar35 * 4);
              iVar48 = iVar48 + (iVar48 + -1 >> 0x1f & uVar10) + -1;
              uVar42 = (ulonglong)pbVar15[iVar48];
              if (*(char *)((longlong)&local_9e8 + uVar42) == '\0') {
                uVar63 = auStack_de8[uVar42];
                auStack_de8[uVar42] = uVar63 + 1;
                *(int *)(lVar14 + (longlong)(int)uVar63 * 4) = iVar48;
                uVar63 = auStack_de8[lVar44];
              }
              uVar35 = uVar35 + 1;
            } while ((longlong)uVar35 < (longlong)(int)uVar63);
          }
          uVar53 = piVar13[iVar28 + 0x100] & 0xffdfffff;
          iVar48 = *(int *)(local_11f0[0]._ubuf + lVar44 * 4 + -0x6c);
          while (uVar53 = uVar53 - 1, iVar48 < (int)uVar53) {
            iVar52 = *(int *)(lVar14 + (longlong)(int)uVar53 * 4);
            iVar52 = iVar52 + (iVar52 + -1 >> 0x1f & uVar10) + -1;
            uVar35 = (ulonglong)pbVar15[iVar52];
            if (*(char *)((longlong)&local_9e8 + uVar35) == '\0') {
              iVar48 = *(int *)(local_11f0[0]._ubuf + uVar35 * 4 + -0x6c);
              *(int *)(local_11f0[0]._ubuf + uVar35 * 4 + -0x6c) = iVar48 + -1;
              *(int *)(lVar14 + (longlong)iVar48 * 4) = iVar52;
              iVar48 = *(int *)(local_11f0[0]._ubuf + lVar44 * 4 + -0x6c);
            }
          }
          if ((uVar63 - 1 != iVar48) && ((uVar63 != 0 || (iVar48 != uVar10 - 1)))) {
            FUN_00e9e160();
            sVar59 = local_11f0[0]._p._4_4_;
          }
          lVar50 = 0;
          do {
            pbVar7 = (byte *)((longlong)piVar13 + lVar50 + lVar44 * 4 + 2);
            *pbVar7 = *pbVar7 | 0x20;
            pbVar7 = (byte *)((longlong)piVar13 + lVar50 + lVar44 * 4 + 0x402);
            *pbVar7 = *pbVar7 | 0x20;
            lVar50 = lVar50 + 0x800;
          } while (lVar50 != 0x40000);
          *(undefined1 *)((longlong)&local_9e8 + lVar44) = 1;
          if (uVar38 < 0xff) {
            uVar35 = (longlong)piVar13[iVar28] & 0xffffffffffdfffff;
            uVar63 = (piVar13[iVar28 + 0x100] & 0xffdfffffU) - (int)uVar35;
            bVar33 = 0xff;
            do {
              bVar33 = bVar33 + 1;
            } while (0xfffe < (int)uVar63 >> (bVar33 & 0x1f));
            if (0 < (int)uVar63) {
              uVar42 = (ulonglong)uVar63;
              if ((uVar63 & 1) != 0) {
                lVar44 = uVar42 + uVar35;
                uVar42 = uVar42 - 1;
                iVar28 = *(int *)(lVar14 + (lVar44 + -1) * 4);
                uVar47 = (undefined2)((uint)uVar42 >> (bVar33 & 0x1f));
                *(undefined2 *)(pbVar4 + (longlong)iVar28 * 2) = uVar47;
                if ((longlong)iVar28 < 0x22) {
                  *(undefined2 *)(pbVar4 + (longlong)(int)(uVar10 + iVar28) * 2) = uVar47;
                }
              }
              if (uVar63 != 1) {
                lVar44 = lVar14 + -4 + uVar35 * 4;
                do {
                  iVar28 = *(int *)(lVar44 + uVar42 * 4);
                  uVar47 = (undefined2)((int)uVar42 - 1U >> (bVar33 & 0x1f));
                  *(undefined2 *)(pbVar4 + (longlong)iVar28 * 2) = uVar47;
                  if ((longlong)iVar28 < 0x22) {
                    *(undefined2 *)(pbVar4 + (longlong)(int)(uVar10 + iVar28) * 2) = uVar47;
                  }
                  iVar28 = *(int *)(lVar44 + -4 + uVar42 * 4);
                  uVar47 = (undefined2)((uint)(uVar42 - 2) >> (bVar33 & 0x1f));
                  *(undefined2 *)(pbVar4 + (longlong)iVar28 * 2) = uVar47;
                  if ((longlong)iVar28 < 0x22) {
                    *(undefined2 *)(pbVar4 + (longlong)(int)(uVar10 + iVar28) * 2) = uVar47;
                  }
                  bVar16 = 2 < (longlong)uVar42;
                  uVar42 = uVar42 - 2;
                } while (bVar16);
              }
            }
            pFVar61 = pFVar68;
            if (0xffff < (int)(uVar63 - 1) >> (bVar33 & 0x1f)) {
              FUN_00e9e160();
              sVar59 = local_11f0[0]._p._4_4_;
            }
          }
          uVar38 = uVar38 + 1;
        } while (uVar38 != 0x100);
        if (3 < (int)sVar59) {
          _fprintf(local_1260,(char *)(ulonglong)uVar10,(ulonglong)(uVar10 - (int)local_1260));
          sVar59 = local_11f0[0]._p._4_4_;
        }
LAB_00e9cde6:
        iVar28 = (int)local_11f0[0]._p;
        if (2 < (int)sVar59) {
          _fprintf(pFVar41,(char *)(ulonglong)(uint)(iVar26 - (int)local_11f0[0]._p));
          sVar59 = local_11f0[0]._p._4_4_;
        }
        if (iVar28 < 0) {
          if (1 < (int)sVar59) {
            _fwrite(*(void **)PTR____stderrp_024a98a0,1,sVar59,pFVar61);
            sVar59 = local_11f0[0]._p._4_4_;
          }
          break;
        }
        goto LAB_00e9ce44;
      }
    } while( true );
  }
  FUN_00e9cf20(uVar10,piVar13,sVar59);
LAB_00e9ce44:
  *(undefined4 *)(unaff_RDI + 0x30) = 0xffffffff;
  if (0 < (int)*(uint *)(unaff_RDI + 0x6c)) {
    uVar38 = 0;
    do {
      if (*(int *)(lVar14 + uVar38 * 4) == 0) {
        *(int *)(unaff_RDI + 0x30) = (int)uVar38;
        if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
          return;
        }
        goto LAB_00e9cf0f;
      }
      uVar38 = uVar38 + 1;
    } while (*(uint *)(unaff_RDI + 0x6c) != uVar38);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    FUN_00e9e160();
    return;
  }
LAB_00e9cf0f:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_00e9c146:
  uVar64 = (uint)pFVar37;
  if ((int)uVar65 < (int)uVar64) goto LAB_00e9c20e;
  goto LAB_00e9c14f;
LAB_00e9c21a:
  *puVar32 = uVar11 + 1;
  if (!bVar16) goto LAB_00e9bfe0;
  goto LAB_00e9bfea;
}


